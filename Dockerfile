FROM ubuntu:xenial

RUN apt-get update && \
      apt-get install -y \
      vim \
      git \
      ruby \
      ffmpeg \
      python \
      curl \
      bzip2 \
      libfreetype6 \
      libgl1-mesa-dev \
      libglu1-mesa \
      libxi6 \
      libxrender1 \
      build-essential \
      cmake && \
      apt-get -y autoremove && \
      rm -rf /var/lib/apt/lists/*

RUN curl https://dl.google.com/dl/cloudsdk/release/google-cloud-sdk.tar.gz > /tmp/google-cloud-sdk.tar.gz && \
    mkdir -p /usr/local/gcloud \
      && tar -C /usr/local/gcloud -xvf /tmp/google-cloud-sdk.tar.gz \
      && /usr/local/gcloud/google-cloud-sdk/install.sh

ENV PATH $PATH:/usr/local/gcloud/google-cloud-sdk/bin

RUN mkdir /usr/src/blender
WORKDIR /usr/src/blender

RUN echo -e "#!/bin/sh\n\${@}" > /usr/sbin/sudo; chmod +x /usr/sbin/sudo;

COPY . /usr/src/blender

RUN git submodule update --init --recursive && \
	git submodule foreach git checkout master && \
	git submodule foreach git pull --rebase origin master

RUN cd .. && ./blender/build_files/build_environment/install_deps.sh

RUN make -j8 BUILD_CMAKE_ARGS="-U *SNDFILE* -U *PYTHON* -U *BOOST* -U *Boost* -U *OPENCOLORIO* -U *OPENEXR* -U *OPENIMAGEIO* -U *LLVM* -U *CYCLES* -U *OPENSUBDIV* -U *OPENVDB* -U *COLLADA* -U *FFMPEG* -U *ALEMBIC* -D WITH_CODEC_SNDFILE=ON -D PYTHON_VERSION=3.7 -D PYTHON_ROOT_DIR=/opt/lib/python-3.7 -D WITH_OPENCOLORIO=ON -D OPENCOLORIO_ROOT_DIR=/opt/lib/ocio -D WITH_OPENIMAGEIO=ON -D OPENIMAGEIO_ROOT_DIR=/opt/lib/oiio -D WITH_CYCLES_OSL=ON -D WITH_LLVM=ON -D LLVM_VERSION=6.0 -D OSL_ROOT_DIR=/opt/lib/osl -D WITH_OPENSUBDIV=ON -D OPENSUBDIV_ROOT_DIR=/opt/lib/osd -D WITH_OPENVDB=ON -D WITH_OPENVDB_BLOSC=ON -D WITH_ALEMBIC=ON -D ALEMBIC_ROOT_DIR=/opt/lib/alembic -D WITH_CODEC_FFMPEG=ON -D FFMPEG_LIBRARIES='avformat;avcodec;avutil;avdevice;swscale;swresample;lzma;rt;theoradec;theora;theoraenc;vorbis;vorbisenc;vorbisfile;ogg;x264;openjp2'"
