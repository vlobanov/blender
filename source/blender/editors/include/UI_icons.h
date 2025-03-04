/*
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 * The Original Code is Copyright (C) 2009 Blender Foundation.
 * All rights reserved.
 */

/** \file
 * \ingroup editorui
 */

/* Note: this is included multiple times with different #defines for DEF_ICON. */

/* Auto define more specific types for places that do not need the distinction. */
#ifndef DEF_ICON_SCENE
#  define DEF_ICON_SCENE DEF_ICON
#endif
#ifndef DEF_ICON_COLLECTION
#  define DEF_ICON_COLLECTION DEF_ICON
#endif
#ifndef DEF_ICON_OBJECT
#  define DEF_ICON_OBJECT DEF_ICON
#endif
#ifndef DEF_ICON_OBJECT_DATA
#  define DEF_ICON_OBJECT_DATA DEF_ICON
#endif
#ifndef DEF_ICON_MODIFIER
#  define DEF_ICON_MODIFIER DEF_ICON
#endif
#ifndef DEF_ICON_SHADING
#  define DEF_ICON_SHADING DEF_ICON
#endif
#ifndef DEF_ICON_COLOR
#  define DEF_ICON_COLOR DEF_ICON
#endif
#ifndef DEF_ICON_FUND
#  define DEF_ICON_FUND DEF_ICON
#endif

/* ICON_ prefix added */
DEF_ICON_COLOR(NONE)
DEF_ICON(QUESTION)
DEF_ICON(ERROR)
DEF_ICON(CANCEL)
DEF_ICON(TRIA_RIGHT)
DEF_ICON(TRIA_DOWN)
DEF_ICON(TRIA_LEFT)
DEF_ICON(TRIA_UP)
DEF_ICON(ARROW_LEFTRIGHT)
DEF_ICON(PLUS)
DEF_ICON(DISCLOSURE_TRI_RIGHT)
DEF_ICON(DISCLOSURE_TRI_DOWN)
DEF_ICON(RADIOBUT_OFF)
DEF_ICON(RADIOBUT_ON)
DEF_ICON(MENU_PANEL)
DEF_ICON(BLENDER)
DEF_ICON(GRIP)
DEF_ICON(DOT)
DEF_ICON(COLLAPSEMENU)
DEF_ICON(X)
DEF_ICON(DUPLICATE)
DEF_ICON(TRASH)
DEF_ICON(COLLECTION_NEW)
DEF_ICON_BLANK(77)
DEF_ICON(NODE)
DEF_ICON(NODE_SEL)

/* ui */
DEF_ICON(WINDOW)
DEF_ICON(WORKSPACE)
DEF_ICON(RIGHTARROW_THIN)
DEF_ICON(BORDERMOVE)
DEF_ICON(VIEWZOOM)
DEF_ICON(ADD)
DEF_ICON(REMOVE)
DEF_ICON(PANEL_CLOSE)
DEF_ICON(COPY_ID)
DEF_ICON(EYEDROPPER)
DEF_ICON_BLANK(92)
DEF_ICON(AUTO)
DEF_ICON(CHECKBOX_DEHLT) /* de-Highlight - Checkbox OFF */
DEF_ICON(CHECKBOX_HLT)   /* Highlight - Checkbox ON */
DEF_ICON(UNLOCKED)
DEF_ICON(LOCKED)
DEF_ICON(UNPINNED)
DEF_ICON(PINNED)
DEF_ICON(SCREEN_BACK)
DEF_ICON(RIGHTARROW)
DEF_ICON(DOWNARROW_HLT)
DEF_ICON(FCURVE_SNAPSHOT)
DEF_ICON(OBJECT_HIDDEN)
DEF_ICON_BLANK(105)
DEF_ICON_BLANK(106)
DEF_ICON(PLUGIN)

/* various ui */
DEF_ICON(HELP)
DEF_ICON(GHOST_ENABLED)
DEF_ICON(COLOR) /* see COLOR_RED/GREEN/BLUE */
DEF_ICON(UNLINKED)
DEF_ICON(LINKED)
DEF_ICON(HAND)
DEF_ICON(ZOOM_ALL)
DEF_ICON(ZOOM_SELECTED)
DEF_ICON(ZOOM_PREVIOUS)
DEF_ICON(ZOOM_IN)
DEF_ICON(ZOOM_OUT)
DEF_ICON(DRIVER_DISTANCE)
DEF_ICON(DRIVER_ROTATIONAL_DIFFERENCE)
DEF_ICON(DRIVER_TRANSFORM)
DEF_ICON(FREEZE)
DEF_ICON(STYLUS_PRESSURE)
DEF_ICON(GHOST_DISABLED)
DEF_ICON(FILE_NEW)
DEF_ICON(FILE_TICK)
DEF_ICON(QUIT)
DEF_ICON(URL)
DEF_ICON(RECOVER_LAST)
DEF_ICON(THREE_DOTS)
DEF_ICON(FULLSCREEN_ENTER)
DEF_ICON(FULLSCREEN_EXIT)
DEF_ICON_BLANK(135)

/* BUTTONS */
DEF_ICON_SHADING(LIGHT)
DEF_ICON_SHADING(MATERIAL)
DEF_ICON_SHADING(TEXTURE)
DEF_ICON(ANIM)
DEF_ICON_SHADING(WORLD)
DEF_ICON_SCENE(SCENE)
DEF_ICON_SCENE(OUTPUT)
DEF_ICON_BLANK(145)
DEF_ICON_BLANK(146)
DEF_ICON(SCRIPT)
DEF_ICON_MODIFIER(PARTICLES)
DEF_ICON_MODIFIER(PHYSICS)
DEF_ICON_OBJECT_DATA(SPEAKER)
DEF_ICON_BLANK(151)
DEF_ICON_SCENE(TOOL_SETTINGS)
DEF_ICON_MODIFIER(SHADERFX)
DEF_ICON_MODIFIER(MODIFIER)
DEF_ICON_BLANK(155)
DEF_ICON_BLANK(156)
DEF_ICON_BLANK(157)
DEF_ICON_BLANK(158)
DEF_ICON_BLANK(159)
DEF_ICON_BLANK(160)
DEF_ICON(BLANK1)  // Not actually blank - this is used all over the place
DEF_ICON(FAKE_USER_OFF)
DEF_ICON(FAKE_USER_ON)
/* EDITORS */
DEF_ICON(VIEW3D)
DEF_ICON(GRAPH)
DEF_ICON(OUTLINER)
DEF_ICON(PROPERTIES)
DEF_ICON(FILEBROWSER)
DEF_ICON(IMAGE)
DEF_ICON(INFO)
DEF_ICON(SEQUENCE)
DEF_ICON_OBJECT_DATA(TEXT)
DEF_ICON_BLANK(174)
DEF_ICON(SOUND)
DEF_ICON(ACTION)
DEF_ICON(NLA)
DEF_ICON(PREFERENCES)
DEF_ICON(TIME)
DEF_ICON(NODETREE)
DEF_ICON_BLANK(181)
DEF_ICON(CONSOLE)
DEF_ICON_BLANK(183)
DEF_ICON(TRACKER)
DEF_ICON(ASSET_MANAGER)
DEF_ICON(NODE_COMPOSITING)
DEF_ICON(NODE_TEXTURE)
DEF_ICON(NODE_MATERIAL)
DEF_ICON(UV)
DEF_ICON_BLANK(190)

/* MODES */
DEF_ICON(OBJECT_DATAMODE)  // XXX fix this up
DEF_ICON(EDITMODE_HLT)
DEF_ICON(UV_DATA)
DEF_ICON(VPAINT_HLT)
DEF_ICON(TPAINT_HLT)
DEF_ICON(WPAINT_HLT)
DEF_ICON(SCULPTMODE_HLT)
DEF_ICON(POSE_HLT)
DEF_ICON(PARTICLEMODE)
DEF_ICON_BLANK(202)
DEF_ICON_BLANK(203)
DEF_ICON_BLANK(204)
DEF_ICON_BLANK(205)
DEF_ICON_BLANK(206)
DEF_ICON_BLANK(207)
DEF_ICON_BLANK(208)
DEF_ICON(TRACKING)
DEF_ICON(TRACKING_BACKWARDS)
DEF_ICON(TRACKING_FORWARDS)
DEF_ICON(TRACKING_BACKWARDS_SINGLE)
DEF_ICON(TRACKING_FORWARDS_SINGLE)
DEF_ICON(TRACKING_CLEAR_BACKWARDS)
DEF_ICON(TRACKING_CLEAR_FORWARDS)
DEF_ICON(TRACKING_REFINE_BACKWARDS)
DEF_ICON(TRACKING_REFINE_FORWARDS)
DEF_ICON_BLANK(77b)

/* DATA */
DEF_ICON_SCENE(SCENE_DATA)
DEF_ICON_SCENE(RENDERLAYERS)
DEF_ICON_SHADING(WORLD_DATA)
DEF_ICON_OBJECT(OBJECT_DATA)
DEF_ICON_OBJECT_DATA(MESH_DATA)
DEF_ICON_OBJECT_DATA(CURVE_DATA)
DEF_ICON_OBJECT_DATA(META_DATA)
DEF_ICON_OBJECT_DATA(LATTICE_DATA)
DEF_ICON_OBJECT_DATA(LIGHT_DATA)
DEF_ICON_SHADING(MATERIAL_DATA)
DEF_ICON_SHADING(TEXTURE_DATA)
DEF_ICON(ANIM_DATA)
DEF_ICON_OBJECT_DATA(CAMERA_DATA)
DEF_ICON_OBJECT_DATA(PARTICLE_DATA)
DEF_ICON(LIBRARY_DATA_DIRECT)
DEF_ICON_COLLECTION(GROUP)
DEF_ICON_OBJECT_DATA(ARMATURE_DATA)
DEF_ICON(COMMUNITY)
DEF_ICON_OBJECT_DATA(BONE_DATA)
DEF_ICON_MODIFIER(CONSTRAINT)
DEF_ICON_OBJECT_DATA(SHAPEKEY_DATA)
DEF_ICON_MODIFIER(CONSTRAINT_BONE)
DEF_ICON(CAMERA_STEREO)
DEF_ICON(PACKAGE)
DEF_ICON(UGLYPACKAGE)
DEF_ICON(EXPERIMENTAL)

/* DATA */
DEF_ICON_SHADING(BRUSH_DATA)
DEF_ICON_SHADING(IMAGE_DATA)
DEF_ICON(FILE)
DEF_ICON(FCURVE)
DEF_ICON_OBJECT_DATA(FONT_DATA)
DEF_ICON_SCENE(RENDER_RESULT)
DEF_ICON_OBJECT_DATA(SURFACE_DATA)
DEF_ICON_OBJECT_DATA(EMPTY_DATA)
DEF_ICON(PRESET)
DEF_ICON(RENDER_ANIMATION)
DEF_ICON(RENDER_STILL)
DEF_ICON(LIBRARY_DATA_BROKEN)
DEF_ICON(BOIDS)
DEF_ICON(STRANDS)
DEF_ICON(LIBRARY_DATA_INDIRECT)
DEF_ICON_OBJECT_DATA(GREASEPENCIL)
DEF_ICON_SHADING(LINE_DATA)
DEF_ICON(LIBRARY_DATA_OVERRIDE)
DEF_ICON(GROUP_BONE)
DEF_ICON(GROUP_VERTEX)
DEF_ICON(GROUP_VCOL)
DEF_ICON(GROUP_UVS)
DEF_ICON(FACE_MAPS)
DEF_ICON_BLANK(272)
DEF_ICON(RNA)
DEF_ICON(RNA_ADD)

/* INPUT + DECORATOR */
DEF_ICON(MOUSE_LMB)
DEF_ICON(MOUSE_MMB)
DEF_ICON(MOUSE_RMB)
DEF_ICON(MOUSE_MOVE)
DEF_ICON(MOUSE_LMB_DRAG)
DEF_ICON(MOUSE_MMB_DRAG)
DEF_ICON(MOUSE_RMB_DRAG)
DEF_ICON_BLANK(284)
DEF_ICON(PRESET_NEW)
DEF_ICON_BLANK(286)
DEF_ICON(DECORATE)
DEF_ICON(DECORATE_KEYFRAME)
DEF_ICON(DECORATE_ANIMATE)
DEF_ICON(DECORATE_DRIVER)
DEF_ICON(DECORATE_LINKED)
DEF_ICON(DECORATE_LIBRARY_OVERRIDE)
DEF_ICON(DECORATE_UNLOCKED)
DEF_ICON(DECORATE_LOCKED)
DEF_ICON(DECORATE_OVERRIDE)
DEF_ICON_FUND(FUND)
DEF_ICON(TRACKER_DATA)
DEF_ICON(HEART)
DEF_ICON(ORPHAN_DATA)
DEF_ICON(USER)
DEF_ICON(SYSTEM)
DEF_ICON(SETTINGS)

/* OUTLINER */
DEF_ICON_OBJECT(OUTLINER_OB_EMPTY)
DEF_ICON_OBJECT(OUTLINER_OB_MESH)
DEF_ICON_OBJECT(OUTLINER_OB_CURVE)
DEF_ICON_OBJECT(OUTLINER_OB_LATTICE)
DEF_ICON_OBJECT(OUTLINER_OB_META)
DEF_ICON_OBJECT(OUTLINER_OB_LIGHT)
DEF_ICON_OBJECT(OUTLINER_OB_CAMERA)
DEF_ICON_OBJECT(OUTLINER_OB_ARMATURE)
DEF_ICON_OBJECT(OUTLINER_OB_FONT)
DEF_ICON_OBJECT(OUTLINER_OB_SURFACE)
DEF_ICON_OBJECT(OUTLINER_OB_SPEAKER)
DEF_ICON_OBJECT(OUTLINER_OB_FORCE_FIELD)
DEF_ICON_OBJECT(OUTLINER_OB_GROUP_INSTANCE)
DEF_ICON_OBJECT(OUTLINER_OB_GREASEPENCIL)
DEF_ICON_OBJECT(OUTLINER_OB_LIGHTPROBE)
DEF_ICON_OBJECT(OUTLINER_OB_IMAGE)
DEF_ICON_BLANK(321)
DEF_ICON(RESTRICT_COLOR_OFF)
DEF_ICON(RESTRICT_COLOR_ON)
DEF_ICON(HIDE_ON)
DEF_ICON(HIDE_OFF)
DEF_ICON(RESTRICT_SELECT_ON)
DEF_ICON(RESTRICT_SELECT_OFF)
DEF_ICON(RESTRICT_RENDER_ON)
DEF_ICON(RESTRICT_RENDER_OFF)
DEF_ICON(RESTRICT_INSTANCED_OFF)

/* OUTLINER */
DEF_ICON_OBJECT_DATA(OUTLINER_DATA_EMPTY)
DEF_ICON_OBJECT_DATA(OUTLINER_DATA_MESH)
DEF_ICON_OBJECT_DATA(OUTLINER_DATA_CURVE)
DEF_ICON_OBJECT_DATA(OUTLINER_DATA_LATTICE)
DEF_ICON_OBJECT_DATA(OUTLINER_DATA_META)
DEF_ICON_OBJECT_DATA(OUTLINER_DATA_LIGHT)
DEF_ICON_OBJECT_DATA(OUTLINER_DATA_CAMERA)
DEF_ICON_OBJECT_DATA(OUTLINER_DATA_ARMATURE)
DEF_ICON_OBJECT_DATA(OUTLINER_DATA_FONT)
DEF_ICON_OBJECT_DATA(OUTLINER_DATA_SURFACE)
DEF_ICON_OBJECT_DATA(OUTLINER_DATA_SPEAKER)
DEF_ICON_OBJECT_DATA(OUTLINER_DATA_LIGHTPROBE)
DEF_ICON_OBJECT_DATA(OUTLINER_DATA_GP_LAYER)
DEF_ICON_OBJECT_DATA(OUTLINER_DATA_GREASEPENCIL)
DEF_ICON(GP_SELECT_POINTS)
DEF_ICON(GP_SELECT_STROKES)
DEF_ICON(GP_MULTIFRAME_EDITING)
DEF_ICON(GP_ONLY_SELECTED)
DEF_ICON(GP_SELECT_BETWEEN_STROKES)
DEF_ICON(MODIFIER_OFF)
DEF_ICON(MODIFIER_ON)
DEF_ICON(ONIONSKIN_OFF)
DEF_ICON(ONIONSKIN_ON)
DEF_ICON(RESTRICT_VIEW_ON)
DEF_ICON(RESTRICT_VIEW_OFF)
DEF_ICON(RESTRICT_INSTANCED_ON)

/* PRIMITIVES */
DEF_ICON(MESH_PLANE)
DEF_ICON(MESH_CUBE)
DEF_ICON(MESH_CIRCLE)
DEF_ICON(MESH_UVSPHERE)
DEF_ICON(MESH_ICOSPHERE)
DEF_ICON(MESH_GRID)
DEF_ICON(MESH_MONKEY)
DEF_ICON(MESH_CYLINDER)
DEF_ICON(MESH_TORUS)
DEF_ICON(MESH_CONE)
DEF_ICON(MESH_CAPSULE)
DEF_ICON(EMPTY_SINGLE_ARROW)
DEF_ICON_OBJECT_DATA(LIGHT_POINT)
DEF_ICON_OBJECT_DATA(LIGHT_SUN)
DEF_ICON_OBJECT_DATA(LIGHT_SPOT)
DEF_ICON_OBJECT_DATA(LIGHT_HEMI)
DEF_ICON_OBJECT_DATA(LIGHT_AREA)
DEF_ICON(CUBE)
DEF_ICON(SPHERE)
DEF_ICON(CONE)
DEF_ICON(META_PLANE)
DEF_ICON(META_CUBE)
DEF_ICON(META_BALL)
DEF_ICON(META_ELLIPSOID)
DEF_ICON(META_CAPSULE)
DEF_ICON_BLANK(625)

/* PRIMITIVES */
DEF_ICON(SURFACE_NCURVE)
DEF_ICON(SURFACE_NCIRCLE)
DEF_ICON(SURFACE_NSURFACE)
DEF_ICON(SURFACE_NCYLINDER)
DEF_ICON(SURFACE_NSPHERE)
DEF_ICON(SURFACE_NTORUS)
DEF_ICON(EMPTY_AXIS)
DEF_ICON(STROKE)
DEF_ICON(EMPTY_ARROWS)
DEF_ICON(CURVE_BEZCURVE)
DEF_ICON(CURVE_BEZCIRCLE)
DEF_ICON(CURVE_NCURVE)
DEF_ICON(CURVE_NCIRCLE)
DEF_ICON(CURVE_PATH)
DEF_ICON_OBJECT_DATA(LIGHTPROBE_CUBEMAP)
DEF_ICON_OBJECT_DATA(LIGHTPROBE_PLANAR)
DEF_ICON_OBJECT_DATA(LIGHTPROBE_GRID)
DEF_ICON_BLANK(406)
DEF_ICON_BLANK(407)
DEF_ICON(COLOR_RED)
DEF_ICON(COLOR_GREEN)
DEF_ICON(COLOR_BLUE)
DEF_ICON(TRIA_RIGHT_BAR)
DEF_ICON(TRIA_DOWN_BAR)
DEF_ICON(TRIA_LEFT_BAR)
DEF_ICON(TRIA_UP_BAR)

/* EMPTY */
DEF_ICON(FORCE_FORCE)
DEF_ICON(FORCE_WIND)
DEF_ICON(FORCE_VORTEX)
DEF_ICON(FORCE_MAGNETIC)
DEF_ICON(FORCE_HARMONIC)
DEF_ICON(FORCE_CHARGE)
DEF_ICON(FORCE_LENNARDJONES)
DEF_ICON(FORCE_TEXTURE)
DEF_ICON(FORCE_CURVE)
DEF_ICON(FORCE_BOID)
DEF_ICON(FORCE_TURBULENCE)
DEF_ICON(FORCE_DRAG)
DEF_ICON(FORCE_SMOKEFLOW)
DEF_ICON_BLANK(673)
DEF_ICON_BLANK(674)
DEF_ICON(RIGID_BODY)
DEF_ICON(RIGID_BODY_CONSTRAINT)
DEF_ICON_BLANK(677)
DEF_ICON_BLANK(678)
DEF_ICON_BLANK(679)
DEF_ICON_BLANK(680)
DEF_ICON_BLANK(681)
DEF_ICON_BLANK(682)
DEF_ICON(IMAGE_PLANE)
DEF_ICON(IMAGE_BACKGROUND)
DEF_ICON(IMAGE_REFERENCE)

/* EMPTY */
DEF_ICON_BLANK(445)
DEF_ICON_BLANK(446)
DEF_ICON_BLANK(447)
DEF_ICON(NODE_INSERT_ON)
DEF_ICON(NODE_INSERT_OFF)
DEF_ICON(NODE_TOP)
DEF_ICON(NODE_SIDE)
DEF_ICON(NODE_CORNER)
DEF_ICON_BLANK(698)
DEF_ICON_BLANK(699)
DEF_ICON_BLANK(700)
DEF_ICON_BLANK(701)
DEF_ICON_BLANK(702)
DEF_ICON_BLANK(703)
DEF_ICON_BLANK(704)
DEF_ICON_BLANK(705)
DEF_ICON_BLANK(706)
DEF_ICON_BLANK(707)
DEF_ICON_BLANK(708)
DEF_ICON_BLANK(709)
DEF_ICON_BLANK(710)
DEF_ICON(SELECT_SET)
DEF_ICON(SELECT_EXTEND)
DEF_ICON(SELECT_SUBTRACT)
DEF_ICON(SELECT_INTERSECT)
DEF_ICON(SELECT_DIFFERENCE)

/* EMPTY */
DEF_ICON(ALIGN_LEFT)
DEF_ICON(ALIGN_CENTER)
DEF_ICON(ALIGN_RIGHT)
DEF_ICON(ALIGN_JUSTIFY)
DEF_ICON(ALIGN_FLUSH)
DEF_ICON(ALIGN_TOP)
DEF_ICON(ALIGN_MIDDLE)
DEF_ICON(ALIGN_BOTTOM)
DEF_ICON(BOLD)
DEF_ICON(ITALIC)
DEF_ICON(UNDERLINE)
DEF_ICON(SMALL_CAPS)
DEF_ICON_BLANK(742)
DEF_ICON_BLANK(743)
DEF_ICON_BLANK(744)
DEF_ICON_BLANK(745)
DEF_ICON_BLANK(746)
DEF_ICON_BLANK(747)
DEF_ICON_BLANK(748)
DEF_ICON_BLANK(749)
DEF_ICON_BLANK(750)
DEF_ICON_BLANK(751)
DEF_ICON(HOLDOUT_OFF)
DEF_ICON(HOLDOUT_ON)
DEF_ICON(INDIRECT_ONLY_OFF)
DEF_ICON(INDIRECT_ONLY_ON)

/* CONSTRAINTS */
DEF_ICON_MODIFIER(CON_CAMERASOLVER)
DEF_ICON_MODIFIER(CON_FOLLOWTRACK)
DEF_ICON_MODIFIER(CON_OBJECTSOLVER)
DEF_ICON_MODIFIER(CON_LOCLIKE)
DEF_ICON_MODIFIER(CON_ROTLIKE)
DEF_ICON_MODIFIER(CON_SIZELIKE)
DEF_ICON_MODIFIER(CON_TRANSLIKE)
DEF_ICON_MODIFIER(CON_DISTLIMIT)
DEF_ICON_MODIFIER(CON_LOCLIMIT)
DEF_ICON_MODIFIER(CON_ROTLIMIT)
DEF_ICON_MODIFIER(CON_SIZELIMIT)
DEF_ICON_MODIFIER(CON_SAMEVOL)
DEF_ICON_MODIFIER(CON_TRANSFORM)
DEF_ICON_MODIFIER(CON_TRANSFORM_CACHE)
DEF_ICON_MODIFIER(CON_CLAMPTO)
DEF_ICON_MODIFIER(CON_KINEMATIC)
DEF_ICON_MODIFIER(CON_LOCKTRACK)
DEF_ICON_MODIFIER(CON_SPLINEIK)
DEF_ICON_MODIFIER(CON_STRETCHTO)
DEF_ICON_MODIFIER(CON_TRACKTO)
DEF_ICON_MODIFIER(CON_ARMATURE)
DEF_ICON_MODIFIER(CON_CHILDOF)
DEF_ICON_MODIFIER(CON_FLOOR)
DEF_ICON_MODIFIER(CON_FOLLOWPATH)
DEF_ICON_MODIFIER(CON_PIVOT)
DEF_ICON_MODIFIER(CON_SHRINKWRAP)

/* MODIFIERS */
DEF_ICON_MODIFIER(MODIFIER_DATA)
DEF_ICON_MODIFIER(MOD_WAVE)
DEF_ICON_MODIFIER(MOD_BUILD)
DEF_ICON_MODIFIER(MOD_DECIM)
DEF_ICON_MODIFIER(MOD_MIRROR)
DEF_ICON_MODIFIER(MOD_SOFT)
DEF_ICON_MODIFIER(MOD_SUBSURF)
DEF_ICON_MODIFIER(HOOK)
DEF_ICON_MODIFIER(MOD_PHYSICS)
DEF_ICON_MODIFIER(MOD_PARTICLES)
DEF_ICON_MODIFIER(MOD_BOOLEAN)
DEF_ICON_MODIFIER(MOD_EDGESPLIT)
DEF_ICON_MODIFIER(MOD_ARRAY)
DEF_ICON_MODIFIER(MOD_UVPROJECT)
DEF_ICON_MODIFIER(MOD_DISPLACE)
DEF_ICON_MODIFIER(MOD_CURVE)
DEF_ICON_MODIFIER(MOD_LATTICE)
DEF_ICON_MODIFIER(MOD_TINT)
DEF_ICON_MODIFIER(MOD_ARMATURE)
DEF_ICON_MODIFIER(MOD_SHRINKWRAP)
DEF_ICON_MODIFIER(MOD_CAST)
DEF_ICON_MODIFIER(MOD_MESHDEFORM)
DEF_ICON_MODIFIER(MOD_BEVEL)
DEF_ICON_MODIFIER(MOD_SMOOTH)
DEF_ICON_MODIFIER(MOD_SIMPLEDEFORM)
DEF_ICON_MODIFIER(MOD_MASK)

/* MODIFIERS */
DEF_ICON_MODIFIER(MOD_CLOTH)
DEF_ICON_MODIFIER(MOD_EXPLODE)
DEF_ICON_MODIFIER(MOD_FLUIDSIM)
DEF_ICON_MODIFIER(MOD_MULTIRES)
DEF_ICON_MODIFIER(MOD_SMOKE)
DEF_ICON_MODIFIER(MOD_SOLIDIFY)
DEF_ICON_MODIFIER(MOD_SCREW)
DEF_ICON_MODIFIER(MOD_VERTEX_WEIGHT)
DEF_ICON_MODIFIER(MOD_DYNAMICPAINT)
DEF_ICON_MODIFIER(MOD_REMESH)
DEF_ICON_MODIFIER(MOD_OCEAN)
DEF_ICON_MODIFIER(MOD_WARP)
DEF_ICON_MODIFIER(MOD_SKIN)
DEF_ICON_MODIFIER(MOD_TRIANGULATE)
DEF_ICON_MODIFIER(MOD_WIREFRAME)
DEF_ICON_MODIFIER(MOD_DATA_TRANSFER)
DEF_ICON_MODIFIER(MOD_NORMALEDIT)
DEF_ICON_MODIFIER(MOD_PARTICLE_INSTANCE)
DEF_ICON_MODIFIER(MOD_HUE_SATURATION)
DEF_ICON_MODIFIER(MOD_NOISE)
DEF_ICON_MODIFIER(MOD_OFFSET)
DEF_ICON_MODIFIER(MOD_SIMPLIFY)
DEF_ICON_MODIFIER(MOD_THICKNESS)
DEF_ICON_MODIFIER(MOD_INSTANCE)
DEF_ICON_MODIFIER(MOD_TIME)
DEF_ICON_MODIFIER(MOD_OPACITY)

/* ANIMATION */
DEF_ICON(REC)
DEF_ICON(PLAY)
DEF_ICON(FF)
DEF_ICON(REW)
DEF_ICON(PAUSE)
DEF_ICON(PREV_KEYFRAME)
DEF_ICON(NEXT_KEYFRAME)
DEF_ICON(PLAY_SOUND)
DEF_ICON(PLAY_REVERSE)
DEF_ICON(PREVIEW_RANGE)
DEF_ICON(ACTION_TWEAK)
DEF_ICON(PMARKER_ACT)
DEF_ICON(PMARKER_SEL)
DEF_ICON(PMARKER)
DEF_ICON(MARKER_HLT)
DEF_ICON(MARKER)
DEF_ICON(KEYFRAME_HLT)
DEF_ICON(KEYFRAME)
DEF_ICON(KEYINGSET)
DEF_ICON(KEY_DEHLT)
DEF_ICON(KEY_HLT)
DEF_ICON(MUTE_IPO_OFF)
DEF_ICON(MUTE_IPO_ON)
DEF_ICON_BLANK(517)
DEF_ICON_BLANK(516)
DEF_ICON(DRIVER)

/* ANIMATION */
DEF_ICON(SOLO_OFF)
DEF_ICON(SOLO_ON)
DEF_ICON(FRAME_PREV)
DEF_ICON(FRAME_NEXT)
DEF_ICON(NLA_PUSHDOWN)
DEF_ICON(IPO_CONSTANT)
DEF_ICON(IPO_LINEAR)
DEF_ICON(IPO_BEZIER)
DEF_ICON(IPO_SINE)
DEF_ICON(IPO_QUAD)
DEF_ICON(IPO_CUBIC)
DEF_ICON(IPO_QUART)
DEF_ICON(IPO_QUINT)
DEF_ICON(IPO_EXPO)
DEF_ICON(IPO_CIRC)
DEF_ICON(IPO_BOUNCE)
DEF_ICON(IPO_ELASTIC)
DEF_ICON(IPO_BACK)
DEF_ICON(IPO_EASE_IN)
DEF_ICON(IPO_EASE_OUT)
DEF_ICON(IPO_EASE_IN_OUT)
DEF_ICON(NORMALIZE_FCURVES)
DEF_ICON_BLANK(635)
DEF_ICON_BLANK(636)
DEF_ICON_BLANK(637)
DEF_ICON_BLANK(638)

/* EDITING */
DEF_ICON(VERTEXSEL)
DEF_ICON(EDGESEL)
DEF_ICON(FACESEL)
DEF_ICON_BLANK(209)
DEF_ICON(CURSOR)
DEF_ICON(PIVOT_BOUNDBOX)
DEF_ICON(PIVOT_CURSOR)
DEF_ICON(PIVOT_INDIVIDUAL)
DEF_ICON(PIVOT_MEDIAN)
DEF_ICON(PIVOT_ACTIVE)
DEF_ICON(CENTER_ONLY)
DEF_ICON(ROOTCURVE)
DEF_ICON(SMOOTHCURVE)
DEF_ICON(SPHERECURVE)
DEF_ICON(INVERSESQUARECURVE)
DEF_ICON(SHARPCURVE)
DEF_ICON(LINCURVE)
DEF_ICON(NOCURVE)
DEF_ICON(RNDCURVE)
DEF_ICON(PROP_OFF)
DEF_ICON(PROP_ON)
DEF_ICON(PROP_CON)
DEF_ICON(PROP_PROJECTED)
DEF_ICON(PARTICLE_POINT)
DEF_ICON(PARTICLE_TIP)
DEF_ICON(PARTICLE_PATH)

/* EDITING */
DEF_ICON_BLANK(669)
DEF_ICON_BLANK(670)
DEF_ICON_BLANK(671)
DEF_ICON_BLANK(672)
DEF_ICON(SNAP_OFF)
DEF_ICON(SNAP_ON)
DEF_ICON(SNAP_NORMAL)
DEF_ICON(SNAP_GRID)
DEF_ICON(SNAP_VERTEX)
DEF_ICON(SNAP_EDGE)
DEF_ICON(SNAP_FACE)
DEF_ICON(SNAP_VOLUME)
DEF_ICON(SNAP_INCREMENT)
DEF_ICON(STICKY_UVS_LOC)
DEF_ICON(STICKY_UVS_DISABLE)
DEF_ICON(STICKY_UVS_VERT)
DEF_ICON(CLIPUV_DEHLT)
DEF_ICON(CLIPUV_HLT)
DEF_ICON(SNAP_PEEL_OBJECT)
DEF_ICON(GRID)
DEF_ICON(OBJECT_ORIGIN)
DEF_ICON(ORIENTATION_GLOBAL)
DEF_ICON(ORIENTATION_GIMBAL)
DEF_ICON(ORIENTATION_LOCAL)
DEF_ICON(ORIENTATION_NORMAL)
DEF_ICON(ORIENTATION_VIEW)

/* EDITING */
DEF_ICON(COPYDOWN)
DEF_ICON(PASTEDOWN)
DEF_ICON(PASTEFLIPUP)
DEF_ICON(PASTEFLIPDOWN)
DEF_ICON(VIS_SEL_11)
DEF_ICON(VIS_SEL_10)
DEF_ICON(VIS_SEL_01)
DEF_ICON(VIS_SEL_00)
DEF_ICON_BLANK(231)
DEF_ICON(AUTOMERGE_OFF)
DEF_ICON(AUTOMERGE_ON)
DEF_ICON_BLANK(234)
DEF_ICON(UV_VERTEXSEL)
DEF_ICON(UV_EDGESEL)
DEF_ICON(UV_FACESEL)
DEF_ICON(UV_ISLANDSEL)
DEF_ICON(UV_SYNC_SELECT)
DEF_ICON_BLANK(240)
DEF_ICON_BLANK(241)
DEF_ICON_BLANK(242)
DEF_ICON_BLANK(243)
DEF_ICON(GIZMO)
DEF_ICON(ORIENTATION_CURSOR)
DEF_ICON(NORMALS_VERTEX)
DEF_ICON(NORMALS_FACE)
DEF_ICON(NORMALS_VERTEX_FACE)

/* 3D VIEW */
DEF_ICON(SHADING_BBOX)
DEF_ICON(SHADING_WIRE)
DEF_ICON(SHADING_SOLID)
DEF_ICON(SHADING_RENDERED)
DEF_ICON(SHADING_TEXTURE)
DEF_ICON(OVERLAY)
DEF_ICON(XRAY)
DEF_ICON_BLANK(249)
DEF_ICON_BLANK(250)
DEF_ICON(LOCKVIEW_OFF)
DEF_ICON(LOCKVIEW_ON)
DEF_ICON_BLANK(251)
DEF_ICON(AXIS_SIDE)
DEF_ICON(AXIS_FRONT)
DEF_ICON(AXIS_TOP)
DEF_ICON(NDOF_DOM)
DEF_ICON(NDOF_TURN)
DEF_ICON(NDOF_FLY)
DEF_ICON(NDOF_TRANS)
DEF_ICON(LAYER_USED)
DEF_ICON(LAYER_ACTIVE)
/* available */
DEF_ICON_BLANK(254)
DEF_ICON_BLANK(255)
DEF_ICON_BLANK(256)
DEF_ICON_BLANK(257)
DEF_ICON_BLANK(257b)
DEF_ICON_BLANK(258)
DEF_ICON_BLANK(259)
DEF_ICON_BLANK(260)
DEF_ICON_BLANK(261)
DEF_ICON_BLANK(262)
DEF_ICON_BLANK(263)
DEF_ICON_BLANK(264)
DEF_ICON_BLANK(265)
DEF_ICON_BLANK(266)
DEF_ICON_BLANK(267)
DEF_ICON_BLANK(268)
DEF_ICON_BLANK(269)
DEF_ICON_BLANK(270)
DEF_ICON_BLANK(271)
DEF_ICON_BLANK(766)
DEF_ICON_BLANK(767)
DEF_ICON_BLANK(274)
DEF_ICON_BLANK(275)
DEF_ICON_BLANK(276)
DEF_ICON_BLANK(277)
DEF_ICON_BLANK(772)
DEF_ICON_BLANK(773)
DEF_ICON_BLANK(774)
DEF_ICON_BLANK(775)
DEF_ICON_BLANK(776)
DEF_ICON_BLANK(777)

/* FILE SELECT */
DEF_ICON(SORTALPHA)
DEF_ICON(SORTBYEXT)
DEF_ICON(SORTTIME)
DEF_ICON(SORTSIZE)
DEF_ICON(SHORTDISPLAY)
DEF_ICON(LONGDISPLAY)
DEF_ICON_BLANK(786)
DEF_ICON(IMGDISPLAY)
DEF_ICON_BLANK(788)
DEF_ICON_BLANK(789)
DEF_ICON(BOOKMARKS)
DEF_ICON(FONTPREVIEW)
DEF_ICON(FILTER)
DEF_ICON(NEWFOLDER)
DEF_ICON_BLANK(794)
DEF_ICON(FILE_PARENT)
DEF_ICON(FILE_REFRESH)
DEF_ICON(FILE_FOLDER)
DEF_ICON(FILE_BLANK)
DEF_ICON(FILE_BLEND)
DEF_ICON(FILE_IMAGE)
DEF_ICON(FILE_MOVIE)
DEF_ICON(FILE_SCRIPT)
DEF_ICON(FILE_SOUND)
DEF_ICON(FILE_FONT)
DEF_ICON(FILE_TEXT)

/* FILE SELECT */
DEF_ICON(SORT_DESC)
DEF_ICON(SORT_ASC)
DEF_ICON(LINK_BLEND)
DEF_ICON(APPEND_BLEND)
DEF_ICON(IMPORT)
DEF_ICON(EXPORT)
DEF_ICON_BLANK(814)
DEF_ICON_BLANK(815)
DEF_ICON_BLANK(816)
DEF_ICON_BLANK(817)
DEF_ICON_BLANK(818)
DEF_ICON_BLANK(819)
DEF_ICON_BLANK(820)
DEF_ICON(LOOP_BACK)
DEF_ICON(LOOP_FORWARDS)
DEF_ICON(BACK)
DEF_ICON(FORWARD)
DEF_ICON_BLANK(825)
DEF_ICON_BLANK(826)
DEF_ICON_BLANK(827)
DEF_ICON(FILE_CACHE)
DEF_ICON(FILE_VOLUME)
DEF_ICON(FILE_3D)
DEF_ICON(FILE_HIDDEN)
DEF_ICON(FILE_BACKUP)
DEF_ICON(DISK_DRIVE)

/* SHADING / TEXT */
DEF_ICON(MATPLANE)
DEF_ICON(MATSPHERE)
DEF_ICON(MATCUBE)
DEF_ICON(MONKEY)
DEF_ICON(HAIR)
DEF_ICON(ALIASED)
DEF_ICON(ANTIALIASED)
DEF_ICON(MAT_SPHERE_SKY)
DEF_ICON(MATSHADERBALL)
DEF_ICON(MATCLOTH)
DEF_ICON(MATFLUID)
DEF_ICON_BLANK(847)
DEF_ICON(WORDWRAP_OFF)
DEF_ICON(WORDWRAP_ON)
DEF_ICON(SYNTAX_OFF)
DEF_ICON(SYNTAX_ON)
DEF_ICON(LINENUMBERS_OFF)
DEF_ICON(LINENUMBERS_ON)
DEF_ICON(SCRIPTPLUGINS)
DEF_ICON_BLANK(855)
DEF_ICON_BLANK(856)
DEF_ICON_BLANK(857)
DEF_ICON_BLANK(858)
DEF_ICON_BLANK(859)
DEF_ICON_BLANK(860)
DEF_ICON_BLANK(861)

/* SEQUENCE / IMAGE EDITOR */
DEF_ICON(SEQ_SEQUENCER)
DEF_ICON(SEQ_PREVIEW)
DEF_ICON(SEQ_LUMA_WAVEFORM)
DEF_ICON(SEQ_CHROMA_SCOPE)
DEF_ICON(SEQ_HISTOGRAM)
DEF_ICON(SEQ_SPLITVIEW)
DEF_ICON_BLANK(870)
DEF_ICON_BLANK(871)
DEF_ICON_BLANK(872)
DEF_ICON(IMAGE_RGB)  // XXX CHANGE TO STRAIGHT ALPHA, Z ETC
DEF_ICON(IMAGE_RGB_ALPHA)
DEF_ICON(IMAGE_ALPHA)
DEF_ICON(IMAGE_ZDEPTH)
DEF_ICON_BLANK(877)
DEF_ICON_BLANK(878)
DEF_ICON_BLANK(879)
DEF_ICON_BLANK(880)
DEF_ICON_BLANK(881)
DEF_ICON_BLANK(882)
DEF_ICON_BLANK(883)
DEF_ICON_BLANK(884)
DEF_ICON(VIEW_PERSPECTIVE)
DEF_ICON(VIEW_ORTHO)
DEF_ICON(VIEW_CAMERA)
DEF_ICON(VIEW_PAN)
DEF_ICON(VIEW_ZOOM)

/* brush icons */

DEF_ICON_COLOR(BRUSH_BLOB)
DEF_ICON_COLOR(BRUSH_BLUR)
DEF_ICON_COLOR(BRUSH_CLAY)
DEF_ICON_COLOR(BRUSH_CLAY_STRIPS)
DEF_ICON_COLOR(BRUSH_CLONE)
DEF_ICON_COLOR(BRUSH_CREASE)
DEF_ICON_COLOR(BRUSH_FILL)
DEF_ICON_COLOR(BRUSH_FLATTEN)
DEF_ICON_COLOR(BRUSH_GRAB)
DEF_ICON_COLOR(BRUSH_INFLATE)
DEF_ICON_COLOR(BRUSH_LAYER)
DEF_ICON_COLOR(BRUSH_MASK)
DEF_ICON_COLOR(BRUSH_MIX)
DEF_ICON_COLOR(BRUSH_NUDGE)
DEF_ICON_COLOR(BRUSH_PINCH)
DEF_ICON_COLOR(BRUSH_SCRAPE)
DEF_ICON_COLOR(BRUSH_SCULPT_DRAW)
DEF_ICON_COLOR(BRUSH_SMEAR)
DEF_ICON_COLOR(BRUSH_SMOOTH)
DEF_ICON_COLOR(BRUSH_SNAKE_HOOK)
DEF_ICON_COLOR(BRUSH_SOFTEN)
DEF_ICON_COLOR(BRUSH_TEXDRAW)
DEF_ICON_COLOR(BRUSH_TEXFILL)
DEF_ICON_COLOR(BRUSH_TEXMASK)
DEF_ICON_COLOR(BRUSH_THUMB)
DEF_ICON_COLOR(BRUSH_ROTATE)

/* grease pencil sculpt */
DEF_ICON_COLOR(GPBRUSH_SMOOTH)
DEF_ICON_COLOR(GPBRUSH_THICKNESS)
DEF_ICON_COLOR(GPBRUSH_STRENGTH)
DEF_ICON_COLOR(GPBRUSH_GRAB)
DEF_ICON_COLOR(GPBRUSH_PUSH)
DEF_ICON_COLOR(GPBRUSH_TWIST)
DEF_ICON_COLOR(GPBRUSH_PINCH)
DEF_ICON_COLOR(GPBRUSH_RANDOMIZE)
DEF_ICON_COLOR(GPBRUSH_CLONE)
DEF_ICON_COLOR(GPBRUSH_WEIGHT)
DEF_ICON_COLOR(GPBRUSH_PENCIL)
DEF_ICON_COLOR(GPBRUSH_PEN)
DEF_ICON_COLOR(GPBRUSH_INK)
DEF_ICON_COLOR(GPBRUSH_INKNOISE)
DEF_ICON_COLOR(GPBRUSH_BLOCK)
DEF_ICON_COLOR(GPBRUSH_MARKER)
DEF_ICON_COLOR(GPBRUSH_FILL)
DEF_ICON_COLOR(GPBRUSH_ERASE_SOFT)
DEF_ICON_COLOR(GPBRUSH_ERASE_HARD)
DEF_ICON_COLOR(GPBRUSH_ERASE_STROKE)

/* Vector Icons */
DEF_ICON_VECTOR(SMALL_TRI_RIGHT_VEC)

DEF_ICON_VECTOR(KEYTYPE_KEYFRAME_VEC)
DEF_ICON_VECTOR(KEYTYPE_BREAKDOWN_VEC)
DEF_ICON_VECTOR(KEYTYPE_EXTREME_VEC)
DEF_ICON_VECTOR(KEYTYPE_JITTER_VEC)
DEF_ICON_VECTOR(KEYTYPE_MOVING_HOLD_VEC)

DEF_ICON_VECTOR(HANDLETYPE_FREE_VEC)
DEF_ICON_VECTOR(HANDLETYPE_ALIGNED_VEC)
DEF_ICON_VECTOR(HANDLETYPE_VECTOR_VEC)
DEF_ICON_VECTOR(HANDLETYPE_AUTO_VEC)
DEF_ICON_VECTOR(HANDLETYPE_AUTO_CLAMP_VEC)

DEF_ICON_VECTOR(COLORSET_01_VEC)
DEF_ICON_VECTOR(COLORSET_02_VEC)
DEF_ICON_VECTOR(COLORSET_03_VEC)
DEF_ICON_VECTOR(COLORSET_04_VEC)
DEF_ICON_VECTOR(COLORSET_05_VEC)
DEF_ICON_VECTOR(COLORSET_06_VEC)
DEF_ICON_VECTOR(COLORSET_07_VEC)
DEF_ICON_VECTOR(COLORSET_08_VEC)
DEF_ICON_VECTOR(COLORSET_09_VEC)
DEF_ICON_VECTOR(COLORSET_10_VEC)
DEF_ICON_VECTOR(COLORSET_11_VEC)
DEF_ICON_VECTOR(COLORSET_12_VEC)
DEF_ICON_VECTOR(COLORSET_13_VEC)
DEF_ICON_VECTOR(COLORSET_14_VEC)
DEF_ICON_VECTOR(COLORSET_15_VEC)
DEF_ICON_VECTOR(COLORSET_16_VEC)
DEF_ICON_VECTOR(COLORSET_17_VEC)
DEF_ICON_VECTOR(COLORSET_18_VEC)
DEF_ICON_VECTOR(COLORSET_19_VEC)
DEF_ICON_VECTOR(COLORSET_20_VEC)

/* Events  */
DEF_ICON_COLOR(EVENT_A)
DEF_ICON_COLOR(EVENT_B)
DEF_ICON_COLOR(EVENT_C)
DEF_ICON_COLOR(EVENT_D)
DEF_ICON_COLOR(EVENT_E)
DEF_ICON_COLOR(EVENT_F)
DEF_ICON_COLOR(EVENT_G)
DEF_ICON_COLOR(EVENT_H)
DEF_ICON_COLOR(EVENT_I)
DEF_ICON_COLOR(EVENT_J)
DEF_ICON_COLOR(EVENT_K)
DEF_ICON_COLOR(EVENT_L)
DEF_ICON_COLOR(EVENT_M)
DEF_ICON_COLOR(EVENT_N)
DEF_ICON_COLOR(EVENT_O)
DEF_ICON_COLOR(EVENT_P)
DEF_ICON_COLOR(EVENT_Q)
DEF_ICON_COLOR(EVENT_R)
DEF_ICON_COLOR(EVENT_S)
DEF_ICON_COLOR(EVENT_T)
DEF_ICON_COLOR(EVENT_U)
DEF_ICON_COLOR(EVENT_V)
DEF_ICON_COLOR(EVENT_W)
DEF_ICON_COLOR(EVENT_X)
DEF_ICON_COLOR(EVENT_Y)
DEF_ICON_COLOR(EVENT_Z)
DEF_ICON_COLOR(EVENT_SHIFT)
DEF_ICON_COLOR(EVENT_CTRL)
DEF_ICON_COLOR(EVENT_ALT)
DEF_ICON_COLOR(EVENT_OS)
DEF_ICON_COLOR(EVENT_F1)
DEF_ICON_COLOR(EVENT_F2)
DEF_ICON_COLOR(EVENT_F3)
DEF_ICON_COLOR(EVENT_F4)
DEF_ICON_COLOR(EVENT_F5)
DEF_ICON_COLOR(EVENT_F6)
DEF_ICON_COLOR(EVENT_F7)
DEF_ICON_COLOR(EVENT_F8)
DEF_ICON_COLOR(EVENT_F9)
DEF_ICON_COLOR(EVENT_F10)
DEF_ICON_COLOR(EVENT_F11)
DEF_ICON_COLOR(EVENT_F12)
DEF_ICON_COLOR(EVENT_ESC)
DEF_ICON_COLOR(EVENT_TAB)
DEF_ICON_COLOR(EVENT_PAGEUP)
DEF_ICON_COLOR(EVENT_PAGEDOWN)
DEF_ICON_COLOR(EVENT_RETURN)
/* add as needed. */

/* Undefine all types. */

#undef DEF_ICON
#undef DEF_ICON_ERROR
#undef DEF_ICON_SCENE
#undef DEF_ICON_COLLECTION
#undef DEF_ICON_OBJECT
#undef DEF_ICON_OBJECT_DATA
#undef DEF_ICON_MODIFIER
#undef DEF_ICON_SHADING
#undef DEF_ICON_VECTOR
#undef DEF_ICON_COLOR
#undef DEF_ICON_FUND
#undef DEF_ICON_BLANK
