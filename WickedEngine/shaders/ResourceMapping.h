#ifndef WI_RESOURCE_MAPPING_H
#define WI_RESOURCE_MAPPING_H

// Slot matchings:
////////////////////////////////////////////////////


// t slot:

// These are reserved slots for systems:
#define TEXSLOT_DEPTH				0
#define TEXSLOT_LINEARDEPTH			1

#define TEXSLOT_GBUFFER0			2
#define TEXSLOT_GBUFFER1			3
#define TEXSLOT_GBUFFER2			4

#define TEXSLOT_ACCELERATION_STRUCTURE 5
#define TEXSLOT_GLOBALENVMAP		6
#define TEXSLOT_GLOBALLIGHTMAP		7
#define TEXSLOT_ENVMAPARRAY			8
#define TEXSLOT_DECALATLAS			9
#define TEXSLOT_SKYVIEWLUT			10
#define TEXSLOT_TRANSMITTANCELUT	11
#define TEXSLOT_MULTISCATTERINGLUT	12
#define TEXSLOT_SKYLUMINANCELUT		13

#define TEXSLOT_SHADOWARRAY_2D		14
#define TEXSLOT_SHADOWARRAY_CUBE	15
#define TEXSLOT_SHADOWARRAY_TRANSPARENT_2D 16
#define TEXSLOT_SHADOWARRAY_TRANSPARENT_CUBE 17

#define TEXSLOT_VOXELRADIANCE		18

#define TEXSLOT_SHEENLUT			19

#define SBSLOT_ENTITYARRAY			20
#define SBSLOT_MATRIXARRAY			21

#define TEXSLOT_FONTATLAS			22

// Ondemand textures are 2d textures and declared in shader globals, these can be used independently in any shader:
#define TEXSLOT_ONDEMAND0			23
#define TEXSLOT_ONDEMAND1			24
#define TEXSLOT_ONDEMAND2			25
#define TEXSLOT_ONDEMAND3			26
#define TEXSLOT_ONDEMAND4			27
#define TEXSLOT_ONDEMAND5			28
#define TEXSLOT_ONDEMAND6			29
#define TEXSLOT_ONDEMAND7			30
#define TEXSLOT_ONDEMAND8			31
#define TEXSLOT_ONDEMAND9			32
#define TEXSLOT_ONDEMAND10			33
#define TEXSLOT_ONDEMAND11			34
#define TEXSLOT_ONDEMAND12			35
#define TEXSLOT_ONDEMAND13			36
#define TEXSLOT_ONDEMAND14			37
#define TEXSLOT_ONDEMAND15			38
#define TEXSLOT_ONDEMAND16			39
#define TEXSLOT_ONDEMAND17			40
#define TEXSLOT_ONDEMAND18			41
#define TEXSLOT_ONDEMAND19			42
#define TEXSLOT_ONDEMAND20			43
#define TEXSLOT_ONDEMAND21			44
#define TEXSLOT_ONDEMAND22			45
#define TEXSLOT_ONDEMAND23			46
#define TEXSLOT_ONDEMAND24			47
#define TEXSLOT_ONDEMAND25			48
#define TEXSLOT_ONDEMAND26			49
#define TEXSLOT_ONDEMAND27			50
#define TEXSLOT_ONDEMAND28			51
#define TEXSLOT_ONDEMAND29			52
#define TEXSLOT_ONDEMAND30			53
#define TEXSLOT_ONDEMAND_COUNT	(TEXSLOT_ONDEMAND30 - TEXSLOT_ONDEMAND0 + 1)

// These are reserved for demand of any type of textures in specific shaders:
#define TEXSLOT_UNIQUE0				46
#define TEXSLOT_UNIQUE1				47

#define TEXSLOT_COUNT				64

// Skinning:
#define SKINNINGSLOT_IN_VERTEX_POS	TEXSLOT_ONDEMAND0
#define SKINNINGSLOT_IN_VERTEX_TAN	TEXSLOT_ONDEMAND1
#define SKINNINGSLOT_IN_VERTEX_BON	TEXSLOT_ONDEMAND2
#define SKINNINGSLOT_IN_BONEBUFFER	TEXSLOT_ONDEMAND3


// wiRenderer object shader resources:
#define TEXSLOT_RENDERER_BASECOLORMAP			TEXSLOT_ONDEMAND0
#define TEXSLOT_RENDERER_NORMALMAP				TEXSLOT_ONDEMAND1
#define TEXSLOT_RENDERER_SURFACEMAP				TEXSLOT_ONDEMAND2
#define TEXSLOT_RENDERER_EMISSIVEMAP			TEXSLOT_ONDEMAND3
#define TEXSLOT_RENDERER_DISPLACEMENTMAP		TEXSLOT_ONDEMAND4
#define TEXSLOT_RENDERER_OCCLUSIONMAP			TEXSLOT_ONDEMAND5
#define TEXSLOT_RENDERER_TRANSMISSIONMAP		TEXSLOT_ONDEMAND6
#define TEXSLOT_RENDERER_SHEENCOLORMAP			TEXSLOT_ONDEMAND7
#define TEXSLOT_RENDERER_SHEENROUGHNESSMAP		TEXSLOT_ONDEMAND8
#define TEXSLOT_RENDERER_CLEARCOATMAP			TEXSLOT_ONDEMAND9
#define TEXSLOT_RENDERER_CLEARCOATROUGHNESSMAP	TEXSLOT_ONDEMAND10
#define TEXSLOT_RENDERER_CLEARCOATNORMALMAP		TEXSLOT_ONDEMAND11

#define TEXSLOT_RENDERER_BLEND1_BASECOLORMAP	TEXSLOT_ONDEMAND19
#define TEXSLOT_RENDERER_BLEND1_NORMALMAP		TEXSLOT_ONDEMAND20
#define TEXSLOT_RENDERER_BLEND1_SURFACEMAP		TEXSLOT_ONDEMAND21
#define TEXSLOT_RENDERER_BLEND1_EMISSIVEMAP		TEXSLOT_ONDEMAND22

#define TEXSLOT_RENDERER_BLEND2_BASECOLORMAP	TEXSLOT_ONDEMAND23
#define TEXSLOT_RENDERER_BLEND2_NORMALMAP		TEXSLOT_ONDEMAND24
#define TEXSLOT_RENDERER_BLEND2_SURFACEMAP		TEXSLOT_ONDEMAND25
#define TEXSLOT_RENDERER_BLEND2_EMISSIVEMAP		TEXSLOT_ONDEMAND26

#define TEXSLOT_RENDERER_BLEND3_BASECOLORMAP	TEXSLOT_ONDEMAND27
#define TEXSLOT_RENDERER_BLEND3_NORMALMAP		TEXSLOT_ONDEMAND28
#define TEXSLOT_RENDERER_BLEND3_SURFACEMAP		TEXSLOT_ONDEMAND29
#define TEXSLOT_RENDERER_BLEND3_EMISSIVEMAP		TEXSLOT_ONDEMAND30

// RenderPath texture mappings:
#define TEXSLOT_RENDERPATH_ENTITYTILES		TEXSLOT_ONDEMAND12
#define TEXSLOT_RENDERPATH_REFLECTION		TEXSLOT_ONDEMAND13
#define TEXSLOT_RENDERPATH_REFRACTION		TEXSLOT_ONDEMAND14
#define TEXSLOT_RENDERPATH_WATERRIPPLES		TEXSLOT_ONDEMAND15
#define TEXSLOT_RENDERPATH_AO				TEXSLOT_ONDEMAND16
#define TEXSLOT_RENDERPATH_SSR				TEXSLOT_ONDEMAND17
#define TEXSLOT_RENDERPATH_RTSHADOW			TEXSLOT_ONDEMAND18

// wiImage:
#define TEXSLOT_IMAGE_BASE			TEXSLOT_ONDEMAND0
#define TEXSLOT_IMAGE_MASK			TEXSLOT_ONDEMAND1
#define TEXSLOT_IMAGE_BACKGROUND	TEXSLOT_ONDEMAND2


#endif // WI_RESOURCE_MAPPING_H
