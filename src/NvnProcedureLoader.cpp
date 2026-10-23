// Reconstructed NVN procedure-table initialization from original name bindings.
using Procedure = void (*)();
using Resolver = Procedure (*)(void *, const char *);
extern "C" {
extern Procedure nvnDeviceBuilderSetDefaults;
extern Procedure nvnDeviceBuilderSetFlags;
extern Procedure nvnDeviceBuilderGetFlags;
extern Procedure nvnDeviceInitialize;
extern Procedure nvnDeviceFinalize;
extern Procedure nvnDeviceSetDebugLabel;
extern Procedure nvnDeviceGetProcAddress;
extern Procedure nvnDeviceGetInteger;
extern Procedure nvnDeviceGetCurrentTimestampInNanoseconds;
extern Procedure nvnDeviceSetIntermediateShaderCache;
extern Procedure nvnDeviceGetTextureHandle;
extern Procedure nvnDeviceGetTexelFetchHandle;
extern Procedure nvnDeviceGetImageHandle;
extern Procedure nvnDeviceInstallDebugCallback;
extern Procedure nvnDeviceGenerateDebugDomainId;
extern Procedure nvnDeviceSetWindowOriginMode;
extern Procedure nvnDeviceSetDepthMode;
extern Procedure nvnDeviceRegisterFastClearColor;
extern Procedure nvnDeviceRegisterFastClearColori;
extern Procedure nvnDeviceRegisterFastClearColorui;
extern Procedure nvnDeviceRegisterFastClearDepth;
extern Procedure nvnDeviceGetWindowOriginMode;
extern Procedure nvnDeviceGetDepthMode;
extern Procedure nvnDeviceGetTimestampInNanoseconds;
extern Procedure nvnDeviceApplyDeferredFinalizes;
extern Procedure nvnDeviceFinalizeCommandHandle;
extern Procedure nvnDeviceWalkDebugDatabase;
extern Procedure nvnDeviceGetSeparateTextureHandle;
extern Procedure nvnDeviceGetSeparateSamplerHandle;
extern Procedure nvnDeviceIsExternalDebuggerAttached;
extern Procedure nvnQueueGetError;
extern Procedure nvnQueueGetTotalCommandMemoryUsed;
extern Procedure nvnQueueGetTotalControlMemoryUsed;
extern Procedure nvnQueueGetTotalComputeMemoryUsed;
extern Procedure nvnQueueResetMemoryUsageCounts;
extern Procedure nvnQueueBuilderSetDevice;
extern Procedure nvnQueueBuilderSetDefaults;
extern Procedure nvnQueueBuilderSetFlags;
extern Procedure nvnQueueBuilderSetCommandMemorySize;
extern Procedure nvnQueueBuilderSetComputeMemorySize;
extern Procedure nvnQueueBuilderSetControlMemorySize;
extern Procedure nvnQueueBuilderGetQueueMemorySize;
extern Procedure nvnQueueBuilderSetQueueMemory;
extern Procedure nvnQueueBuilderSetCommandFlushThreshold;
extern Procedure nvnQueueBuilderSetQueuePriority;
extern Procedure nvnQueueBuilderGetQueuePriority;
extern Procedure nvnQueueBuilderGetDevice;
extern Procedure nvnQueueBuilderGetFlags;
extern Procedure nvnQueueBuilderGetCommandMemorySize;
extern Procedure nvnQueueBuilderGetComputeMemorySize;
extern Procedure nvnQueueBuilderGetControlMemorySize;
extern Procedure nvnQueueBuilderGetCommandFlushThreshold;
extern Procedure nvnQueueBuilderGetMemorySize;
extern Procedure nvnQueueBuilderGetMemory;
extern Procedure nvnQueueInitialize;
extern Procedure nvnQueueFinalize;
extern Procedure nvnQueueSetDebugLabel;
extern Procedure nvnQueueSubmitCommands;
extern Procedure nvnQueueFlush;
extern Procedure nvnQueueFinish;
extern Procedure nvnQueuePresentTexture;
extern Procedure nvnQueueAcquireTexture;
extern Procedure nvnWindowBuilderSetDevice;
extern Procedure nvnWindowBuilderSetDefaults;
extern Procedure nvnWindowBuilderSetNativeWindow;
extern Procedure nvnWindowBuilderSetTextures;
extern Procedure nvnWindowBuilderSetPresentInterval;
extern Procedure nvnWindowBuilderSetNumActiveTextures;
extern Procedure nvnWindowBuilderGetDevice;
extern Procedure nvnWindowBuilderGetNumTextures;
extern Procedure nvnWindowBuilderGetTexture;
extern Procedure nvnWindowBuilderGetNativeWindow;
extern Procedure nvnWindowBuilderGetPresentInterval;
extern Procedure nvnWindowBuilderGetNumActiveTextures;
extern Procedure nvnWindowInitialize;
extern Procedure nvnWindowFinalize;
extern Procedure nvnWindowSetDebugLabel;
extern Procedure nvnWindowAcquireTexture;
extern Procedure nvnWindowGetNativeWindow;
extern Procedure nvnWindowGetPresentInterval;
extern Procedure nvnWindowSetPresentInterval;
extern Procedure nvnWindowSetCrop;
extern Procedure nvnWindowGetCrop;
extern Procedure nvnWindowSetNumActiveTextures;
extern Procedure nvnWindowGetNumActiveTextures;
extern Procedure nvnWindowGetNumTextures;
extern Procedure nvnProgramInitialize;
extern Procedure nvnProgramFinalize;
extern Procedure nvnProgramSetDebugLabel;
extern Procedure nvnProgramSetShaders;
extern Procedure nvnProgramSetShadersExt;
extern Procedure nvnProgramSetSampleShading;
extern Procedure nvnMemoryPoolBuilderSetDevice;
extern Procedure nvnMemoryPoolBuilderSetDefaults;
extern Procedure nvnMemoryPoolBuilderSetStorage;
extern Procedure nvnMemoryPoolBuilderSetFlags;
extern Procedure nvnMemoryPoolBuilderGetDevice;
extern Procedure nvnMemoryPoolBuilderGetMemory;
extern Procedure nvnMemoryPoolBuilderGetSize;
extern Procedure nvnMemoryPoolBuilderGetFlags;
extern Procedure nvnMemoryPoolInitialize;
extern Procedure nvnMemoryPoolSetDebugLabel;
extern Procedure nvnMemoryPoolFinalize;
extern Procedure nvnMemoryPoolMap;
extern Procedure nvnMemoryPoolFlushMappedRange;
extern Procedure nvnMemoryPoolInvalidateMappedRange;
extern Procedure nvnMemoryPoolGetBufferAddress;
extern Procedure nvnMemoryPoolMapVirtual;
extern Procedure nvnMemoryPoolGetSize;
extern Procedure nvnMemoryPoolGetFlags;
extern Procedure nvnTexturePoolInitialize;
extern Procedure nvnTexturePoolSetDebugLabel;
extern Procedure nvnTexturePoolFinalize;
extern Procedure nvnTexturePoolRegisterTexture;
extern Procedure nvnTexturePoolRegisterImage;
extern Procedure nvnTexturePoolGetMemoryPool;
extern Procedure nvnTexturePoolGetMemoryOffset;
extern Procedure nvnTexturePoolGetSize;
extern Procedure nvnSamplerPoolInitialize;
extern Procedure nvnSamplerPoolSetDebugLabel;
extern Procedure nvnSamplerPoolFinalize;
extern Procedure nvnSamplerPoolRegisterSampler;
extern Procedure nvnSamplerPoolRegisterSamplerBuilder;
extern Procedure nvnSamplerPoolGetMemoryPool;
extern Procedure nvnSamplerPoolGetMemoryOffset;
extern Procedure nvnSamplerPoolGetSize;
extern Procedure nvnBufferBuilderSetDevice;
extern Procedure nvnBufferBuilderSetDefaults;
extern Procedure nvnBufferBuilderSetStorage;
extern Procedure nvnBufferBuilderGetDevice;
extern Procedure nvnBufferBuilderGetMemoryPool;
extern Procedure nvnBufferBuilderGetMemoryOffset;
extern Procedure nvnBufferBuilderGetSize;
extern Procedure nvnBufferInitialize;
extern Procedure nvnBufferSetDebugLabel;
extern Procedure nvnBufferFinalize;
extern Procedure nvnBufferMap;
extern Procedure nvnBufferGetAddress;
extern Procedure nvnBufferFlushMappedRange;
extern Procedure nvnBufferInvalidateMappedRange;
extern Procedure nvnBufferGetMemoryPool;
extern Procedure nvnBufferGetMemoryOffset;
extern Procedure nvnBufferGetSize;
extern Procedure nvnBufferGetDebugID;
extern Procedure nvnTextureBuilderSetDevice;
extern Procedure nvnTextureBuilderSetDefaults;
extern Procedure nvnTextureBuilderSetFlags;
extern Procedure nvnTextureBuilderSetTarget;
extern Procedure nvnTextureBuilderSetWidth;
extern Procedure nvnTextureBuilderSetHeight;
extern Procedure nvnTextureBuilderSetDepth;
extern Procedure nvnTextureBuilderSetSize1D;
extern Procedure nvnTextureBuilderSetSize2D;
extern Procedure nvnTextureBuilderSetSize3D;
extern Procedure nvnTextureBuilderSetLevels;
extern Procedure nvnTextureBuilderSetFormat;
extern Procedure nvnTextureBuilderSetSamples;
extern Procedure nvnTextureBuilderSetSwizzle;
extern Procedure nvnTextureBuilderSetDepthStencilMode;
extern Procedure nvnTextureBuilderGetStorageSize;
extern Procedure nvnTextureBuilderGetStorageAlignment;
extern Procedure nvnTextureBuilderSetStorage;
extern Procedure nvnTextureBuilderSetPackagedTextureData;
extern Procedure nvnTextureBuilderSetPackagedTextureLayout;
extern Procedure nvnTextureBuilderSetStride;
extern Procedure nvnTextureBuilderSetGLTextureName;
extern Procedure nvnTextureBuilderGetStorageClass;
extern Procedure nvnTextureBuilderGetDevice;
extern Procedure nvnTextureBuilderGetFlags;
extern Procedure nvnTextureBuilderGetTarget;
extern Procedure nvnTextureBuilderGetWidth;
extern Procedure nvnTextureBuilderGetHeight;
extern Procedure nvnTextureBuilderGetDepth;
extern Procedure nvnTextureBuilderGetLevels;
extern Procedure nvnTextureBuilderGetFormat;
extern Procedure nvnTextureBuilderGetSamples;
extern Procedure nvnTextureBuilderGetSwizzle;
extern Procedure nvnTextureBuilderGetDepthStencilMode;
extern Procedure nvnTextureBuilderGetPackagedTextureData;
extern Procedure nvnTextureBuilderGetPackagedTextureLayout;
extern Procedure nvnTextureBuilderGetStride;
extern Procedure nvnTextureBuilderGetSparseTileLayout;
extern Procedure nvnTextureBuilderGetGLTextureName;
extern Procedure nvnTextureBuilderGetZCullStorageSize;
extern Procedure nvnTextureBuilderGetMemoryPool;
extern Procedure nvnTextureBuilderGetMemoryOffset;
extern Procedure nvnTextureBuilderGetRawStorageClass;
extern Procedure nvnTextureViewSetDefaults;
extern Procedure nvnTextureViewSetLevels;
extern Procedure nvnTextureViewSetLayers;
extern Procedure nvnTextureViewSetFormat;
extern Procedure nvnTextureViewSetSwizzle;
extern Procedure nvnTextureViewSetDepthStencilMode;
extern Procedure nvnTextureViewSetTarget;
extern Procedure nvnTextureViewGetLevels;
extern Procedure nvnTextureViewGetLayers;
extern Procedure nvnTextureViewGetFormat;
extern Procedure nvnTextureViewGetSwizzle;
extern Procedure nvnTextureViewGetDepthStencilMode;
extern Procedure nvnTextureViewGetTarget;
extern Procedure nvnTextureViewCompare;
extern Procedure nvnTextureInitialize;
extern Procedure nvnTextureGetZCullStorageSize;
extern Procedure nvnTextureFinalize;
extern Procedure nvnTextureSetDebugLabel;
extern Procedure nvnTextureGetStorageClass;
extern Procedure nvnTextureGetViewOffset;
extern Procedure nvnTextureGetFlags;
extern Procedure nvnTextureGetTarget;
extern Procedure nvnTextureGetWidth;
extern Procedure nvnTextureGetHeight;
extern Procedure nvnTextureGetDepth;
extern Procedure nvnTextureGetLevels;
extern Procedure nvnTextureGetFormat;
extern Procedure nvnTextureGetSamples;
extern Procedure nvnTextureGetSwizzle;
extern Procedure nvnTextureGetDepthStencilMode;
extern Procedure nvnTextureGetStride;
extern Procedure nvnTextureGetTextureAddress;
extern Procedure nvnTextureGetSparseTileLayout;
extern Procedure nvnTextureWriteTexels;
extern Procedure nvnTextureWriteTexelsStrided;
extern Procedure nvnTextureReadTexels;
extern Procedure nvnTextureReadTexelsStrided;
extern Procedure nvnTextureFlushTexels;
extern Procedure nvnTextureInvalidateTexels;
extern Procedure nvnTextureGetMemoryPool;
extern Procedure nvnTextureGetMemoryOffset;
extern Procedure nvnTextureGetStorageSize;
extern Procedure nvnTextureCompare;
extern Procedure nvnTextureGetDebugID;
extern Procedure nvnTextureGetRawStorageClass;
extern Procedure nvnSamplerBuilderSetDevice;
extern Procedure nvnSamplerBuilderSetDefaults;
extern Procedure nvnSamplerBuilderSetMinMagFilter;
extern Procedure nvnSamplerBuilderSetWrapMode;
extern Procedure nvnSamplerBuilderSetLodClamp;
extern Procedure nvnSamplerBuilderSetLodBias;
extern Procedure nvnSamplerBuilderSetCompare;
extern Procedure nvnSamplerBuilderSetBorderColor;
extern Procedure nvnSamplerBuilderSetBorderColori;
extern Procedure nvnSamplerBuilderSetBorderColorui;
extern Procedure nvnSamplerBuilderSetMaxAnisotropy;
extern Procedure nvnSamplerBuilderSetReductionFilter;
extern Procedure nvnSamplerBuilderSetLodSnap;
extern Procedure nvnSamplerBuilderGetDevice;
extern Procedure nvnSamplerBuilderGetMinMagFilter;
extern Procedure nvnSamplerBuilderGetWrapMode;
extern Procedure nvnSamplerBuilderGetLodClamp;
extern Procedure nvnSamplerBuilderGetLodBias;
extern Procedure nvnSamplerBuilderGetCompare;
extern Procedure nvnSamplerBuilderGetBorderColor;
extern Procedure nvnSamplerBuilderGetBorderColori;
extern Procedure nvnSamplerBuilderGetBorderColorui;
extern Procedure nvnSamplerBuilderGetMaxAnisotropy;
extern Procedure nvnSamplerBuilderGetReductionFilter;
extern Procedure nvnSamplerBuilderGetLodSnap;
extern Procedure nvnSamplerInitialize;
extern Procedure nvnSamplerFinalize;
extern Procedure nvnSamplerSetDebugLabel;
extern Procedure nvnSamplerGetMinMagFilter;
extern Procedure nvnSamplerGetWrapMode;
extern Procedure nvnSamplerGetLodClamp;
extern Procedure nvnSamplerGetLodBias;
extern Procedure nvnSamplerGetCompare;
extern Procedure nvnSamplerGetBorderColor;
extern Procedure nvnSamplerGetBorderColori;
extern Procedure nvnSamplerGetBorderColorui;
extern Procedure nvnSamplerGetMaxAnisotropy;
extern Procedure nvnSamplerGetReductionFilter;
extern Procedure nvnSamplerCompare;
extern Procedure nvnSamplerGetDebugID;
extern Procedure nvnBlendStateSetDefaults;
extern Procedure nvnBlendStateSetBlendTarget;
extern Procedure nvnBlendStateSetBlendFunc;
extern Procedure nvnBlendStateSetBlendEquation;
extern Procedure nvnBlendStateSetAdvancedMode;
extern Procedure nvnBlendStateSetAdvancedOverlap;
extern Procedure nvnBlendStateSetAdvancedPremultipliedSrc;
extern Procedure nvnBlendStateSetAdvancedNormalizedDst;
extern Procedure nvnBlendStateGetBlendTarget;
extern Procedure nvnBlendStateGetBlendFunc;
extern Procedure nvnBlendStateGetBlendEquation;
extern Procedure nvnBlendStateGetAdvancedMode;
extern Procedure nvnBlendStateGetAdvancedOverlap;
extern Procedure nvnBlendStateGetAdvancedPremultipliedSrc;
extern Procedure nvnBlendStateGetAdvancedNormalizedDst;
extern Procedure nvnColorStateSetDefaults;
extern Procedure nvnColorStateSetBlendEnable;
extern Procedure nvnColorStateSetLogicOp;
extern Procedure nvnColorStateSetAlphaTest;
extern Procedure nvnColorStateGetBlendEnable;
extern Procedure nvnColorStateGetLogicOp;
extern Procedure nvnColorStateGetAlphaTest;
extern Procedure nvnChannelMaskStateSetDefaults;
extern Procedure nvnChannelMaskStateSetChannelMask;
extern Procedure nvnChannelMaskStateGetChannelMask;
extern Procedure nvnMultisampleStateSetDefaults;
extern Procedure nvnMultisampleStateSetMultisampleEnable;
extern Procedure nvnMultisampleStateSetSamples;
extern Procedure nvnMultisampleStateSetAlphaToCoverageEnable;
extern Procedure nvnMultisampleStateSetAlphaToCoverageDither;
extern Procedure nvnMultisampleStateGetMultisampleEnable;
extern Procedure nvnMultisampleStateGetSamples;
extern Procedure nvnMultisampleStateGetAlphaToCoverageEnable;
extern Procedure nvnMultisampleStateGetAlphaToCoverageDither;
extern Procedure nvnMultisampleStateSetRasterSamples;
extern Procedure nvnMultisampleStateGetRasterSamples;
extern Procedure nvnMultisampleStateSetCoverageModulationMode;
extern Procedure nvnMultisampleStateGetCoverageModulationMode;
extern Procedure nvnMultisampleStateSetCoverageToColorEnable;
extern Procedure nvnMultisampleStateGetCoverageToColorEnable;
extern Procedure nvnMultisampleStateSetCoverageToColorOutput;
extern Procedure nvnMultisampleStateGetCoverageToColorOutput;
extern Procedure nvnMultisampleStateSetSampleLocationsEnable;
extern Procedure nvnMultisampleStateGetSampleLocationsEnable;
extern Procedure nvnMultisampleStateGetSampleLocationsGrid;
extern Procedure nvnMultisampleStateSetSampleLocationsGridEnable;
extern Procedure nvnMultisampleStateGetSampleLocationsGridEnable;
extern Procedure nvnMultisampleStateSetSampleLocations;
extern Procedure nvnPolygonStateSetDefaults;
extern Procedure nvnPolygonStateSetCullFace;
extern Procedure nvnPolygonStateSetFrontFace;
extern Procedure nvnPolygonStateSetPolygonMode;
extern Procedure nvnPolygonStateSetPolygonOffsetEnables;
extern Procedure nvnPolygonStateGetCullFace;
extern Procedure nvnPolygonStateGetFrontFace;
extern Procedure nvnPolygonStateGetPolygonMode;
extern Procedure nvnPolygonStateGetPolygonOffsetEnables;
extern Procedure nvnDepthStencilStateSetDefaults;
extern Procedure nvnDepthStencilStateSetDepthTestEnable;
extern Procedure nvnDepthStencilStateSetDepthWriteEnable;
extern Procedure nvnDepthStencilStateSetDepthFunc;
extern Procedure nvnDepthStencilStateSetStencilTestEnable;
extern Procedure nvnDepthStencilStateSetStencilFunc;
extern Procedure nvnDepthStencilStateSetStencilOp;
extern Procedure nvnDepthStencilStateGetDepthTestEnable;
extern Procedure nvnDepthStencilStateGetDepthWriteEnable;
extern Procedure nvnDepthStencilStateGetDepthFunc;
extern Procedure nvnDepthStencilStateGetStencilTestEnable;
extern Procedure nvnDepthStencilStateGetStencilFunc;
extern Procedure nvnDepthStencilStateGetStencilOp;
extern Procedure nvnVertexAttribStateSetDefaults;
extern Procedure nvnVertexAttribStateSetFormat;
extern Procedure nvnVertexAttribStateSetStreamIndex;
extern Procedure nvnVertexAttribStateGetFormat;
extern Procedure nvnVertexAttribStateGetStreamIndex;
extern Procedure nvnVertexStreamStateSetDefaults;
extern Procedure nvnVertexStreamStateSetStride;
extern Procedure nvnVertexStreamStateSetDivisor;
extern Procedure nvnVertexStreamStateGetStride;
extern Procedure nvnVertexStreamStateGetDivisor;
extern Procedure nvnCommandBufferInitialize;
extern Procedure nvnCommandBufferFinalize;
extern Procedure nvnCommandBufferSetDebugLabel;
extern Procedure nvnCommandBufferSetMemoryCallback;
extern Procedure nvnCommandBufferSetMemoryCallbackData;
extern Procedure nvnCommandBufferSetCommandMemoryCallbackEnabled;
extern Procedure nvnCommandBufferAddCommandMemory;
extern Procedure nvnCommandBufferAddControlMemory;
extern Procedure nvnCommandBufferGetCommandMemorySize;
extern Procedure nvnCommandBufferGetCommandMemoryUsed;
extern Procedure nvnCommandBufferGetCommandMemoryFree;
extern Procedure nvnCommandBufferGetControlMemorySize;
extern Procedure nvnCommandBufferGetControlMemoryUsed;
extern Procedure nvnCommandBufferGetControlMemoryFree;
extern Procedure nvnCommandBufferBeginRecording;
extern Procedure nvnCommandBufferEndRecording;
extern Procedure nvnCommandBufferCallCommands;
extern Procedure nvnCommandBufferCopyCommands;
extern Procedure nvnCommandBufferBindBlendState;
extern Procedure nvnCommandBufferBindChannelMaskState;
extern Procedure nvnCommandBufferBindColorState;
extern Procedure nvnCommandBufferBindMultisampleState;
extern Procedure nvnCommandBufferBindPolygonState;
extern Procedure nvnCommandBufferBindDepthStencilState;
extern Procedure nvnCommandBufferBindVertexAttribState;
extern Procedure nvnCommandBufferBindVertexStreamState;
extern Procedure nvnCommandBufferBindProgram;
extern Procedure nvnCommandBufferBindVertexBuffer;
extern Procedure nvnCommandBufferBindVertexBuffers;
extern Procedure nvnCommandBufferBindUniformBuffer;
extern Procedure nvnCommandBufferBindUniformBuffers;
extern Procedure nvnCommandBufferBindTransformFeedbackBuffer;
extern Procedure nvnCommandBufferBindTransformFeedbackBuffers;
extern Procedure nvnCommandBufferBindStorageBuffer;
extern Procedure nvnCommandBufferBindStorageBuffers;
extern Procedure nvnCommandBufferBindTexture;
extern Procedure nvnCommandBufferBindTextures;
extern Procedure nvnCommandBufferBindImage;
extern Procedure nvnCommandBufferBindImages;
extern Procedure nvnCommandBufferSetPatchSize;
extern Procedure nvnCommandBufferSetInnerTessellationLevels;
extern Procedure nvnCommandBufferSetOuterTessellationLevels;
extern Procedure nvnCommandBufferSetPrimitiveRestart;
extern Procedure nvnCommandBufferBeginTransformFeedback;
extern Procedure nvnCommandBufferEndTransformFeedback;
extern Procedure nvnCommandBufferPauseTransformFeedback;
extern Procedure nvnCommandBufferResumeTransformFeedback;
extern Procedure nvnCommandBufferDrawTransformFeedback;
extern Procedure nvnCommandBufferDrawArrays;
extern Procedure nvnCommandBufferDrawElements;
extern Procedure nvnCommandBufferDrawElementsBaseVertex;
extern Procedure nvnCommandBufferDrawArraysInstanced;
extern Procedure nvnCommandBufferDrawElementsInstanced;
extern Procedure nvnCommandBufferDrawArraysIndirect;
extern Procedure nvnCommandBufferDrawElementsIndirect;
extern Procedure nvnCommandBufferMultiDrawArraysIndirectCount;
extern Procedure nvnCommandBufferMultiDrawElementsIndirectCount;
extern Procedure nvnCommandBufferClearColor;
extern Procedure nvnCommandBufferClearColori;
extern Procedure nvnCommandBufferClearColorui;
extern Procedure nvnCommandBufferClearDepthStencil;
extern Procedure nvnCommandBufferDispatchCompute;
extern Procedure nvnCommandBufferDispatchComputeIndirect;
extern Procedure nvnCommandBufferSetViewport;
extern Procedure nvnCommandBufferSetViewports;
extern Procedure nvnCommandBufferSetViewportSwizzles;
extern Procedure nvnCommandBufferSetScissor;
extern Procedure nvnCommandBufferSetScissors;
extern Procedure nvnCommandBufferSetDepthRange;
extern Procedure nvnCommandBufferSetDepthBounds;
extern Procedure nvnCommandBufferSetDepthRanges;
extern Procedure nvnCommandBufferSetTiledCacheAction;
extern Procedure nvnCommandBufferSetTiledCacheTileSize;
extern Procedure nvnCommandBufferBindSeparateTexture;
extern Procedure nvnCommandBufferBindSeparateSampler;
extern Procedure nvnCommandBufferBindSeparateTextures;
extern Procedure nvnCommandBufferBindSeparateSamplers;
extern Procedure nvnCommandBufferSetStencilValueMask;
extern Procedure nvnCommandBufferSetStencilMask;
extern Procedure nvnCommandBufferSetStencilRef;
extern Procedure nvnCommandBufferSetBlendColor;
extern Procedure nvnCommandBufferSetPointSize;
extern Procedure nvnCommandBufferSetLineWidth;
extern Procedure nvnCommandBufferSetPolygonOffsetClamp;
extern Procedure nvnCommandBufferSetAlphaRef;
extern Procedure nvnCommandBufferSetSampleMask;
extern Procedure nvnCommandBufferSetRasterizerDiscard;
extern Procedure nvnCommandBufferSetDepthClamp;
extern Procedure nvnCommandBufferSetConservativeRasterEnable;
extern Procedure nvnCommandBufferSetConservativeRasterDilate;
extern Procedure nvnCommandBufferSetSubpixelPrecisionBias;
extern Procedure nvnCommandBufferCopyBufferToTexture;
extern Procedure nvnCommandBufferCopyTextureToBuffer;
extern Procedure nvnCommandBufferCopyTextureToTexture;
extern Procedure nvnCommandBufferCopyBufferToBuffer;
extern Procedure nvnCommandBufferClearBuffer;
extern Procedure nvnCommandBufferClearTexture;
extern Procedure nvnCommandBufferClearTexturei;
extern Procedure nvnCommandBufferClearTextureui;
extern Procedure nvnCommandBufferUpdateUniformBuffer;
extern Procedure nvnCommandBufferReportCounter;
extern Procedure nvnCommandBufferResetCounter;
extern Procedure nvnCommandBufferReportValue;
extern Procedure nvnCommandBufferSetRenderEnable;
extern Procedure nvnCommandBufferSetRenderEnableConditional;
extern Procedure nvnCommandBufferSetRenderTargets;
extern Procedure nvnCommandBufferDiscardColor;
extern Procedure nvnCommandBufferDiscardDepthStencil;
extern Procedure nvnCommandBufferDownsample;
extern Procedure nvnCommandBufferTiledDownsample;
extern Procedure nvnCommandBufferDownsampleTextureView;
extern Procedure nvnCommandBufferTiledDownsampleTextureView;
extern Procedure nvnCommandBufferBarrier;
extern Procedure nvnCommandBufferWaitSync;
extern Procedure nvnCommandBufferFenceSync;
extern Procedure nvnCommandBufferSetTexturePool;
extern Procedure nvnCommandBufferSetSamplerPool;
extern Procedure nvnCommandBufferSetShaderScratchMemory;
extern Procedure nvnCommandBufferSaveZCullData;
extern Procedure nvnCommandBufferRestoreZCullData;
extern Procedure nvnCommandBufferSetCopyRowStride;
extern Procedure nvnCommandBufferSetCopyImageStride;
extern Procedure nvnCommandBufferGetCopyRowStride;
extern Procedure nvnCommandBufferGetCopyImageStride;
extern Procedure nvnCommandBufferDrawTexture;
extern Procedure nvnProgramSetSubroutineLinkage;
extern Procedure nvnCommandBufferSetProgramSubroutines;
extern Procedure nvnCommandBufferBindCoverageModulationTable;
extern Procedure nvnCommandBufferResolveDepthBuffer;
extern Procedure nvnCommandBufferSetColorReductionEnable;
extern Procedure nvnCommandBufferSetColorReductionThresholds;
extern Procedure nvnCommandBufferPushDebugGroupStatic;
extern Procedure nvnCommandBufferPushDebugGroupDynamic;
extern Procedure nvnCommandBufferPushDebugGroup;
extern Procedure nvnCommandBufferPopDebugGroup;
extern Procedure nvnCommandBufferPopDebugGroupId;
extern Procedure nvnCommandBufferInsertDebugMarkerStatic;
extern Procedure nvnCommandBufferInsertDebugMarkerDynamic;
extern Procedure nvnCommandBufferInsertDebugMarker;
extern Procedure nvnCommandBufferGetMemoryCallback;
extern Procedure nvnCommandBufferGetMemoryCallbackData;
extern Procedure nvnCommandBufferIsRecording;
extern Procedure nvnSyncInitialize;
extern Procedure nvnSyncFinalize;
extern Procedure nvnSyncSetDebugLabel;
extern Procedure nvnQueueFenceSync;
extern Procedure nvnSyncWait;
extern Procedure nvnQueueWaitSync;
extern Procedure nvnSyncInitializeFromFencedGLSync;
extern Procedure nvnSyncCreateGLSync;
extern Procedure nvnEventBuilderSetDefaults;
extern Procedure nvnEventBuilderSetStorage;
extern Procedure nvnEventBuilderGetStorage;
extern Procedure nvnEventBuilderGetMemoryPool;
extern Procedure nvnEventBuilderGetMemoryOffset;
extern Procedure nvnEventInitialize;
extern Procedure nvnEventFinalize;
extern Procedure nvnEventGetValue;
extern Procedure nvnEventSignal;
extern Procedure nvnEventGetMemoryPool;
extern Procedure nvnEventGetMemoryOffset;
extern Procedure nvnCommandBufferWaitEvent;
extern Procedure nvnCommandBufferSignalEvent;
extern Procedure nvnCommandBufferSetStencilCullCriteria;
void LoadNvnProcedures(void *device, Resolver resolve) {
  nvnDeviceBuilderSetDefaults = resolve(device, "nvnDeviceBuilderSetDefaults");
  nvnDeviceBuilderSetFlags = resolve(device, "nvnDeviceBuilderSetFlags");
  nvnDeviceBuilderGetFlags = resolve(device, "nvnDeviceBuilderGetFlags");
  nvnDeviceInitialize = resolve(device, "nvnDeviceInitialize");
  nvnDeviceFinalize = resolve(device, "nvnDeviceFinalize");
  nvnDeviceSetDebugLabel = resolve(device, "nvnDeviceSetDebugLabel");
  nvnDeviceGetProcAddress = resolve(device, "nvnDeviceGetProcAddress");
  nvnDeviceGetInteger = resolve(device, "nvnDeviceGetInteger");
  nvnDeviceGetCurrentTimestampInNanoseconds =
      resolve(device, "nvnDeviceGetCurrentTimestampInNanoseconds");
  nvnDeviceSetIntermediateShaderCache =
      resolve(device, "nvnDeviceSetIntermediateShaderCache");
  nvnDeviceGetTextureHandle = resolve(device, "nvnDeviceGetTextureHandle");
  nvnDeviceGetTexelFetchHandle =
      resolve(device, "nvnDeviceGetTexelFetchHandle");
  nvnDeviceGetImageHandle = resolve(device, "nvnDeviceGetImageHandle");
  nvnDeviceInstallDebugCallback =
      resolve(device, "nvnDeviceInstallDebugCallback");
  nvnDeviceGenerateDebugDomainId =
      resolve(device, "nvnDeviceGenerateDebugDomainId");
  nvnDeviceSetWindowOriginMode =
      resolve(device, "nvnDeviceSetWindowOriginMode");
  nvnDeviceSetDepthMode = resolve(device, "nvnDeviceSetDepthMode");
  nvnDeviceRegisterFastClearColor =
      resolve(device, "nvnDeviceRegisterFastClearColor");
  nvnDeviceRegisterFastClearColori =
      resolve(device, "nvnDeviceRegisterFastClearColori");
  nvnDeviceRegisterFastClearColorui =
      resolve(device, "nvnDeviceRegisterFastClearColorui");
  nvnDeviceRegisterFastClearDepth =
      resolve(device, "nvnDeviceRegisterFastClearDepth");
  nvnDeviceGetWindowOriginMode =
      resolve(device, "nvnDeviceGetWindowOriginMode");
  nvnDeviceGetDepthMode = resolve(device, "nvnDeviceGetDepthMode");
  nvnDeviceGetTimestampInNanoseconds =
      resolve(device, "nvnDeviceGetTimestampInNanoseconds");
  nvnDeviceApplyDeferredFinalizes =
      resolve(device, "nvnDeviceApplyDeferredFinalizes");
  nvnDeviceFinalizeCommandHandle =
      resolve(device, "nvnDeviceFinalizeCommandHandle");
  nvnDeviceWalkDebugDatabase = resolve(device, "nvnDeviceWalkDebugDatabase");
  nvnDeviceGetSeparateTextureHandle =
      resolve(device, "nvnDeviceGetSeparateTextureHandle");
  nvnDeviceGetSeparateSamplerHandle =
      resolve(device, "nvnDeviceGetSeparateSamplerHandle");
  nvnDeviceIsExternalDebuggerAttached =
      resolve(device, "nvnDeviceIsExternalDebuggerAttached");
  nvnQueueGetError = resolve(device, "nvnQueueGetError");
  nvnQueueGetTotalCommandMemoryUsed =
      resolve(device, "nvnQueueGetTotalCommandMemoryUsed");
  nvnQueueGetTotalControlMemoryUsed =
      resolve(device, "nvnQueueGetTotalControlMemoryUsed");
  nvnQueueGetTotalComputeMemoryUsed =
      resolve(device, "nvnQueueGetTotalComputeMemoryUsed");
  nvnQueueResetMemoryUsageCounts =
      resolve(device, "nvnQueueResetMemoryUsageCounts");
  nvnQueueBuilderSetDevice = resolve(device, "nvnQueueBuilderSetDevice");
  nvnQueueBuilderSetDefaults = resolve(device, "nvnQueueBuilderSetDefaults");
  nvnQueueBuilderSetFlags = resolve(device, "nvnQueueBuilderSetFlags");
  nvnQueueBuilderSetCommandMemorySize =
      resolve(device, "nvnQueueBuilderSetCommandMemorySize");
  nvnQueueBuilderSetComputeMemorySize =
      resolve(device, "nvnQueueBuilderSetComputeMemorySize");
  nvnQueueBuilderSetControlMemorySize =
      resolve(device, "nvnQueueBuilderSetControlMemorySize");
  nvnQueueBuilderGetQueueMemorySize =
      resolve(device, "nvnQueueBuilderGetQueueMemorySize");
  nvnQueueBuilderSetQueueMemory =
      resolve(device, "nvnQueueBuilderSetQueueMemory");
  nvnQueueBuilderSetCommandFlushThreshold =
      resolve(device, "nvnQueueBuilderSetCommandFlushThreshold");
  nvnQueueBuilderSetQueuePriority =
      resolve(device, "nvnQueueBuilderSetQueuePriority");
  nvnQueueBuilderGetQueuePriority =
      resolve(device, "nvnQueueBuilderGetQueuePriority");
  nvnQueueBuilderGetDevice = resolve(device, "nvnQueueBuilderGetDevice");
  nvnQueueBuilderGetFlags = resolve(device, "nvnQueueBuilderGetFlags");
  nvnQueueBuilderGetCommandMemorySize =
      resolve(device, "nvnQueueBuilderGetCommandMemorySize");
  nvnQueueBuilderGetComputeMemorySize =
      resolve(device, "nvnQueueBuilderGetComputeMemorySize");
  nvnQueueBuilderGetControlMemorySize =
      resolve(device, "nvnQueueBuilderGetControlMemorySize");
  nvnQueueBuilderGetCommandFlushThreshold =
      resolve(device, "nvnQueueBuilderGetCommandFlushThreshold");
  nvnQueueBuilderGetMemorySize =
      resolve(device, "nvnQueueBuilderGetMemorySize");
  nvnQueueBuilderGetMemory = resolve(device, "nvnQueueBuilderGetMemory");
  nvnQueueInitialize = resolve(device, "nvnQueueInitialize");
  nvnQueueFinalize = resolve(device, "nvnQueueFinalize");
  nvnQueueSetDebugLabel = resolve(device, "nvnQueueSetDebugLabel");
  nvnQueueSubmitCommands = resolve(device, "nvnQueueSubmitCommands");
  nvnQueueFlush = resolve(device, "nvnQueueFlush");
  nvnQueueFinish = resolve(device, "nvnQueueFinish");
  nvnQueuePresentTexture = resolve(device, "nvnQueuePresentTexture");
  nvnQueueAcquireTexture = resolve(device, "nvnQueueAcquireTexture");
  nvnWindowBuilderSetDevice = resolve(device, "nvnWindowBuilderSetDevice");
  nvnWindowBuilderSetDefaults = resolve(device, "nvnWindowBuilderSetDefaults");
  nvnWindowBuilderSetNativeWindow =
      resolve(device, "nvnWindowBuilderSetNativeWindow");
  nvnWindowBuilderSetTextures = resolve(device, "nvnWindowBuilderSetTextures");
  nvnWindowBuilderSetPresentInterval =
      resolve(device, "nvnWindowBuilderSetPresentInterval");
  nvnWindowBuilderSetNumActiveTextures =
      resolve(device, "nvnWindowBuilderSetNumActiveTextures");
  nvnWindowBuilderGetDevice = resolve(device, "nvnWindowBuilderGetDevice");
  nvnWindowBuilderGetNumTextures =
      resolve(device, "nvnWindowBuilderGetNumTextures");
  nvnWindowBuilderGetTexture = resolve(device, "nvnWindowBuilderGetTexture");
  nvnWindowBuilderGetNativeWindow =
      resolve(device, "nvnWindowBuilderGetNativeWindow");
  nvnWindowBuilderGetPresentInterval =
      resolve(device, "nvnWindowBuilderGetPresentInterval");
  nvnWindowBuilderGetNumActiveTextures =
      resolve(device, "nvnWindowBuilderGetNumActiveTextures");
  nvnWindowInitialize = resolve(device, "nvnWindowInitialize");
  nvnWindowFinalize = resolve(device, "nvnWindowFinalize");
  nvnWindowSetDebugLabel = resolve(device, "nvnWindowSetDebugLabel");
  nvnWindowAcquireTexture = resolve(device, "nvnWindowAcquireTexture");
  nvnWindowGetNativeWindow = resolve(device, "nvnWindowGetNativeWindow");
  nvnWindowGetPresentInterval = resolve(device, "nvnWindowGetPresentInterval");
  nvnWindowSetPresentInterval = resolve(device, "nvnWindowSetPresentInterval");
  nvnWindowSetCrop = resolve(device, "nvnWindowSetCrop");
  nvnWindowGetCrop = resolve(device, "nvnWindowGetCrop");
  nvnWindowSetNumActiveTextures =
      resolve(device, "nvnWindowSetNumActiveTextures");
  nvnWindowGetNumActiveTextures =
      resolve(device, "nvnWindowGetNumActiveTextures");
  nvnWindowGetNumTextures = resolve(device, "nvnWindowGetNumTextures");
  nvnProgramInitialize = resolve(device, "nvnProgramInitialize");
  nvnProgramFinalize = resolve(device, "nvnProgramFinalize");
  nvnProgramSetDebugLabel = resolve(device, "nvnProgramSetDebugLabel");
  nvnProgramSetShaders = resolve(device, "nvnProgramSetShaders");
  nvnProgramSetShadersExt = resolve(device, "nvnProgramSetShadersExt");
  nvnProgramSetSampleShading = resolve(device, "nvnProgramSetSampleShading");
  nvnMemoryPoolBuilderSetDevice =
      resolve(device, "nvnMemoryPoolBuilderSetDevice");
  nvnMemoryPoolBuilderSetDefaults =
      resolve(device, "nvnMemoryPoolBuilderSetDefaults");
  nvnMemoryPoolBuilderSetStorage =
      resolve(device, "nvnMemoryPoolBuilderSetStorage");
  nvnMemoryPoolBuilderSetFlags =
      resolve(device, "nvnMemoryPoolBuilderSetFlags");
  nvnMemoryPoolBuilderGetDevice =
      resolve(device, "nvnMemoryPoolBuilderGetDevice");
  nvnMemoryPoolBuilderGetMemory =
      resolve(device, "nvnMemoryPoolBuilderGetMemory");
  nvnMemoryPoolBuilderGetSize = resolve(device, "nvnMemoryPoolBuilderGetSize");
  nvnMemoryPoolBuilderGetFlags =
      resolve(device, "nvnMemoryPoolBuilderGetFlags");
  nvnMemoryPoolInitialize = resolve(device, "nvnMemoryPoolInitialize");
  nvnMemoryPoolSetDebugLabel = resolve(device, "nvnMemoryPoolSetDebugLabel");
  nvnMemoryPoolFinalize = resolve(device, "nvnMemoryPoolFinalize");
  nvnMemoryPoolMap = resolve(device, "nvnMemoryPoolMap");
  nvnMemoryPoolFlushMappedRange =
      resolve(device, "nvnMemoryPoolFlushMappedRange");
  nvnMemoryPoolInvalidateMappedRange =
      resolve(device, "nvnMemoryPoolInvalidateMappedRange");
  nvnMemoryPoolGetBufferAddress =
      resolve(device, "nvnMemoryPoolGetBufferAddress");
  nvnMemoryPoolMapVirtual = resolve(device, "nvnMemoryPoolMapVirtual");
  nvnMemoryPoolGetSize = resolve(device, "nvnMemoryPoolGetSize");
  nvnMemoryPoolGetFlags = resolve(device, "nvnMemoryPoolGetFlags");
  nvnTexturePoolInitialize = resolve(device, "nvnTexturePoolInitialize");
  nvnTexturePoolSetDebugLabel = resolve(device, "nvnTexturePoolSetDebugLabel");
  nvnTexturePoolFinalize = resolve(device, "nvnTexturePoolFinalize");
  nvnTexturePoolRegisterTexture =
      resolve(device, "nvnTexturePoolRegisterTexture");
  nvnTexturePoolRegisterImage = resolve(device, "nvnTexturePoolRegisterImage");
  nvnTexturePoolGetMemoryPool = resolve(device, "nvnTexturePoolGetMemoryPool");
  nvnTexturePoolGetMemoryOffset =
      resolve(device, "nvnTexturePoolGetMemoryOffset");
  nvnTexturePoolGetSize = resolve(device, "nvnTexturePoolGetSize");
  nvnSamplerPoolInitialize = resolve(device, "nvnSamplerPoolInitialize");
  nvnSamplerPoolSetDebugLabel = resolve(device, "nvnSamplerPoolSetDebugLabel");
  nvnSamplerPoolFinalize = resolve(device, "nvnSamplerPoolFinalize");
  nvnSamplerPoolRegisterSampler =
      resolve(device, "nvnSamplerPoolRegisterSampler");
  nvnSamplerPoolRegisterSamplerBuilder =
      resolve(device, "nvnSamplerPoolRegisterSamplerBuilder");
  nvnSamplerPoolGetMemoryPool = resolve(device, "nvnSamplerPoolGetMemoryPool");
  nvnSamplerPoolGetMemoryOffset =
      resolve(device, "nvnSamplerPoolGetMemoryOffset");
  nvnSamplerPoolGetSize = resolve(device, "nvnSamplerPoolGetSize");
  nvnBufferBuilderSetDevice = resolve(device, "nvnBufferBuilderSetDevice");
  nvnBufferBuilderSetDefaults = resolve(device, "nvnBufferBuilderSetDefaults");
  nvnBufferBuilderSetStorage = resolve(device, "nvnBufferBuilderSetStorage");
  nvnBufferBuilderGetDevice = resolve(device, "nvnBufferBuilderGetDevice");
  nvnBufferBuilderGetMemoryPool =
      resolve(device, "nvnBufferBuilderGetMemoryPool");
  nvnBufferBuilderGetMemoryOffset =
      resolve(device, "nvnBufferBuilderGetMemoryOffset");
  nvnBufferBuilderGetSize = resolve(device, "nvnBufferBuilderGetSize");
  nvnBufferInitialize = resolve(device, "nvnBufferInitialize");
  nvnBufferSetDebugLabel = resolve(device, "nvnBufferSetDebugLabel");
  nvnBufferFinalize = resolve(device, "nvnBufferFinalize");
  nvnBufferMap = resolve(device, "nvnBufferMap");
  nvnBufferGetAddress = resolve(device, "nvnBufferGetAddress");
  nvnBufferFlushMappedRange = resolve(device, "nvnBufferFlushMappedRange");
  nvnBufferInvalidateMappedRange =
      resolve(device, "nvnBufferInvalidateMappedRange");
  nvnBufferGetMemoryPool = resolve(device, "nvnBufferGetMemoryPool");
  nvnBufferGetMemoryOffset = resolve(device, "nvnBufferGetMemoryOffset");
  nvnBufferGetSize = resolve(device, "nvnBufferGetSize");
  nvnBufferGetDebugID = resolve(device, "nvnBufferGetDebugID");
  nvnTextureBuilderSetDevice = resolve(device, "nvnTextureBuilderSetDevice");
  nvnTextureBuilderSetDefaults =
      resolve(device, "nvnTextureBuilderSetDefaults");
  nvnTextureBuilderSetFlags = resolve(device, "nvnTextureBuilderSetFlags");
  nvnTextureBuilderSetTarget = resolve(device, "nvnTextureBuilderSetTarget");
  nvnTextureBuilderSetWidth = resolve(device, "nvnTextureBuilderSetWidth");
  nvnTextureBuilderSetHeight = resolve(device, "nvnTextureBuilderSetHeight");
  nvnTextureBuilderSetDepth = resolve(device, "nvnTextureBuilderSetDepth");
  nvnTextureBuilderSetSize1D = resolve(device, "nvnTextureBuilderSetSize1D");
  nvnTextureBuilderSetSize2D = resolve(device, "nvnTextureBuilderSetSize2D");
  nvnTextureBuilderSetSize3D = resolve(device, "nvnTextureBuilderSetSize3D");
  nvnTextureBuilderSetLevels = resolve(device, "nvnTextureBuilderSetLevels");
  nvnTextureBuilderSetFormat = resolve(device, "nvnTextureBuilderSetFormat");
  nvnTextureBuilderSetSamples = resolve(device, "nvnTextureBuilderSetSamples");
  nvnTextureBuilderSetSwizzle = resolve(device, "nvnTextureBuilderSetSwizzle");
  nvnTextureBuilderSetDepthStencilMode =
      resolve(device, "nvnTextureBuilderSetDepthStencilMode");
  nvnTextureBuilderGetStorageSize =
      resolve(device, "nvnTextureBuilderGetStorageSize");
  nvnTextureBuilderGetStorageAlignment =
      resolve(device, "nvnTextureBuilderGetStorageAlignment");
  nvnTextureBuilderSetStorage = resolve(device, "nvnTextureBuilderSetStorage");
  nvnTextureBuilderSetPackagedTextureData =
      resolve(device, "nvnTextureBuilderSetPackagedTextureData");
  nvnTextureBuilderSetPackagedTextureLayout =
      resolve(device, "nvnTextureBuilderSetPackagedTextureLayout");
  nvnTextureBuilderSetStride = resolve(device, "nvnTextureBuilderSetStride");
  nvnTextureBuilderSetGLTextureName =
      resolve(device, "nvnTextureBuilderSetGLTextureName");
  nvnTextureBuilderGetStorageClass =
      resolve(device, "nvnTextureBuilderGetStorageClass");
  nvnTextureBuilderGetDevice = resolve(device, "nvnTextureBuilderGetDevice");
  nvnTextureBuilderGetFlags = resolve(device, "nvnTextureBuilderGetFlags");
  nvnTextureBuilderGetTarget = resolve(device, "nvnTextureBuilderGetTarget");
  nvnTextureBuilderGetWidth = resolve(device, "nvnTextureBuilderGetWidth");
  nvnTextureBuilderGetHeight = resolve(device, "nvnTextureBuilderGetHeight");
  nvnTextureBuilderGetDepth = resolve(device, "nvnTextureBuilderGetDepth");
  nvnTextureBuilderGetLevels = resolve(device, "nvnTextureBuilderGetLevels");
  nvnTextureBuilderGetFormat = resolve(device, "nvnTextureBuilderGetFormat");
  nvnTextureBuilderGetSamples = resolve(device, "nvnTextureBuilderGetSamples");
  nvnTextureBuilderGetSwizzle = resolve(device, "nvnTextureBuilderGetSwizzle");
  nvnTextureBuilderGetDepthStencilMode =
      resolve(device, "nvnTextureBuilderGetDepthStencilMode");
  nvnTextureBuilderGetPackagedTextureData =
      resolve(device, "nvnTextureBuilderGetPackagedTextureData");
  nvnTextureBuilderGetPackagedTextureLayout =
      resolve(device, "nvnTextureBuilderGetPackagedTextureLayout");
  nvnTextureBuilderGetStride = resolve(device, "nvnTextureBuilderGetStride");
  nvnTextureBuilderGetSparseTileLayout =
      resolve(device, "nvnTextureBuilderGetSparseTileLayout");
  nvnTextureBuilderGetGLTextureName =
      resolve(device, "nvnTextureBuilderGetGLTextureName");
  nvnTextureBuilderGetZCullStorageSize =
      resolve(device, "nvnTextureBuilderGetZCullStorageSize");
  nvnTextureBuilderGetMemoryPool =
      resolve(device, "nvnTextureBuilderGetMemoryPool");
  nvnTextureBuilderGetMemoryOffset =
      resolve(device, "nvnTextureBuilderGetMemoryOffset");
  nvnTextureBuilderGetRawStorageClass =
      resolve(device, "nvnTextureBuilderGetRawStorageClass");
  nvnTextureViewSetDefaults = resolve(device, "nvnTextureViewSetDefaults");
  nvnTextureViewSetLevels = resolve(device, "nvnTextureViewSetLevels");
  nvnTextureViewSetLayers = resolve(device, "nvnTextureViewSetLayers");
  nvnTextureViewSetFormat = resolve(device, "nvnTextureViewSetFormat");
  nvnTextureViewSetSwizzle = resolve(device, "nvnTextureViewSetSwizzle");
  nvnTextureViewSetDepthStencilMode =
      resolve(device, "nvnTextureViewSetDepthStencilMode");
  nvnTextureViewSetTarget = resolve(device, "nvnTextureViewSetTarget");
  nvnTextureViewGetLevels = resolve(device, "nvnTextureViewGetLevels");
  nvnTextureViewGetLayers = resolve(device, "nvnTextureViewGetLayers");
  nvnTextureViewGetFormat = resolve(device, "nvnTextureViewGetFormat");
  nvnTextureViewGetSwizzle = resolve(device, "nvnTextureViewGetSwizzle");
  nvnTextureViewGetDepthStencilMode =
      resolve(device, "nvnTextureViewGetDepthStencilMode");
  nvnTextureViewGetTarget = resolve(device, "nvnTextureViewGetTarget");
  nvnTextureViewCompare = resolve(device, "nvnTextureViewCompare");
  nvnTextureInitialize = resolve(device, "nvnTextureInitialize");
  nvnTextureGetZCullStorageSize =
      resolve(device, "nvnTextureGetZCullStorageSize");
  nvnTextureFinalize = resolve(device, "nvnTextureFinalize");
  nvnTextureSetDebugLabel = resolve(device, "nvnTextureSetDebugLabel");
  nvnTextureGetStorageClass = resolve(device, "nvnTextureGetStorageClass");
  nvnTextureGetViewOffset = resolve(device, "nvnTextureGetViewOffset");
  nvnTextureGetFlags = resolve(device, "nvnTextureGetFlags");
  nvnTextureGetTarget = resolve(device, "nvnTextureGetTarget");
  nvnTextureGetWidth = resolve(device, "nvnTextureGetWidth");
  nvnTextureGetHeight = resolve(device, "nvnTextureGetHeight");
  nvnTextureGetDepth = resolve(device, "nvnTextureGetDepth");
  nvnTextureGetLevels = resolve(device, "nvnTextureGetLevels");
  nvnTextureGetFormat = resolve(device, "nvnTextureGetFormat");
  nvnTextureGetSamples = resolve(device, "nvnTextureGetSamples");
  nvnTextureGetSwizzle = resolve(device, "nvnTextureGetSwizzle");
  nvnTextureGetDepthStencilMode =
      resolve(device, "nvnTextureGetDepthStencilMode");
  nvnTextureGetStride = resolve(device, "nvnTextureGetStride");
  nvnTextureGetTextureAddress = resolve(device, "nvnTextureGetTextureAddress");
  nvnTextureGetSparseTileLayout =
      resolve(device, "nvnTextureGetSparseTileLayout");
  nvnTextureWriteTexels = resolve(device, "nvnTextureWriteTexels");
  nvnTextureWriteTexelsStrided =
      resolve(device, "nvnTextureWriteTexelsStrided");
  nvnTextureReadTexels = resolve(device, "nvnTextureReadTexels");
  nvnTextureReadTexelsStrided = resolve(device, "nvnTextureReadTexelsStrided");
  nvnTextureFlushTexels = resolve(device, "nvnTextureFlushTexels");
  nvnTextureInvalidateTexels = resolve(device, "nvnTextureInvalidateTexels");
  nvnTextureGetMemoryPool = resolve(device, "nvnTextureGetMemoryPool");
  nvnTextureGetMemoryOffset = resolve(device, "nvnTextureGetMemoryOffset");
  nvnTextureGetStorageSize = resolve(device, "nvnTextureGetStorageSize");
  nvnTextureCompare = resolve(device, "nvnTextureCompare");
  nvnTextureGetDebugID = resolve(device, "nvnTextureGetDebugID");
  nvnTextureGetRawStorageClass =
      resolve(device, "nvnTextureGetRawStorageClass");
  nvnSamplerBuilderSetDevice = resolve(device, "nvnSamplerBuilderSetDevice");
  nvnSamplerBuilderSetDefaults =
      resolve(device, "nvnSamplerBuilderSetDefaults");
  nvnSamplerBuilderSetMinMagFilter =
      resolve(device, "nvnSamplerBuilderSetMinMagFilter");
  nvnSamplerBuilderSetWrapMode =
      resolve(device, "nvnSamplerBuilderSetWrapMode");
  nvnSamplerBuilderSetLodClamp =
      resolve(device, "nvnSamplerBuilderSetLodClamp");
  nvnSamplerBuilderSetLodBias = resolve(device, "nvnSamplerBuilderSetLodBias");
  nvnSamplerBuilderSetCompare = resolve(device, "nvnSamplerBuilderSetCompare");
  nvnSamplerBuilderSetBorderColor =
      resolve(device, "nvnSamplerBuilderSetBorderColor");
  nvnSamplerBuilderSetBorderColori =
      resolve(device, "nvnSamplerBuilderSetBorderColori");
  nvnSamplerBuilderSetBorderColorui =
      resolve(device, "nvnSamplerBuilderSetBorderColorui");
  nvnSamplerBuilderSetMaxAnisotropy =
      resolve(device, "nvnSamplerBuilderSetMaxAnisotropy");
  nvnSamplerBuilderSetReductionFilter =
      resolve(device, "nvnSamplerBuilderSetReductionFilter");
  nvnSamplerBuilderSetLodSnap = resolve(device, "nvnSamplerBuilderSetLodSnap");
  nvnSamplerBuilderGetDevice = resolve(device, "nvnSamplerBuilderGetDevice");
  nvnSamplerBuilderGetMinMagFilter =
      resolve(device, "nvnSamplerBuilderGetMinMagFilter");
  nvnSamplerBuilderGetWrapMode =
      resolve(device, "nvnSamplerBuilderGetWrapMode");
  nvnSamplerBuilderGetLodClamp =
      resolve(device, "nvnSamplerBuilderGetLodClamp");
  nvnSamplerBuilderGetLodBias = resolve(device, "nvnSamplerBuilderGetLodBias");
  nvnSamplerBuilderGetCompare = resolve(device, "nvnSamplerBuilderGetCompare");
  nvnSamplerBuilderGetBorderColor =
      resolve(device, "nvnSamplerBuilderGetBorderColor");
  nvnSamplerBuilderGetBorderColori =
      resolve(device, "nvnSamplerBuilderGetBorderColori");
  nvnSamplerBuilderGetBorderColorui =
      resolve(device, "nvnSamplerBuilderGetBorderColorui");
  nvnSamplerBuilderGetMaxAnisotropy =
      resolve(device, "nvnSamplerBuilderGetMaxAnisotropy");
  nvnSamplerBuilderGetReductionFilter =
      resolve(device, "nvnSamplerBuilderGetReductionFilter");
  nvnSamplerBuilderGetLodSnap = resolve(device, "nvnSamplerBuilderGetLodSnap");
  nvnSamplerInitialize = resolve(device, "nvnSamplerInitialize");
  nvnSamplerFinalize = resolve(device, "nvnSamplerFinalize");
  nvnSamplerSetDebugLabel = resolve(device, "nvnSamplerSetDebugLabel");
  nvnSamplerGetMinMagFilter = resolve(device, "nvnSamplerGetMinMagFilter");
  nvnSamplerGetWrapMode = resolve(device, "nvnSamplerGetWrapMode");
  nvnSamplerGetLodClamp = resolve(device, "nvnSamplerGetLodClamp");
  nvnSamplerGetLodBias = resolve(device, "nvnSamplerGetLodBias");
  nvnSamplerGetCompare = resolve(device, "nvnSamplerGetCompare");
  nvnSamplerGetBorderColor = resolve(device, "nvnSamplerGetBorderColor");
  nvnSamplerGetBorderColori = resolve(device, "nvnSamplerGetBorderColori");
  nvnSamplerGetBorderColorui = resolve(device, "nvnSamplerGetBorderColorui");
  nvnSamplerGetMaxAnisotropy = resolve(device, "nvnSamplerGetMaxAnisotropy");
  nvnSamplerGetReductionFilter =
      resolve(device, "nvnSamplerGetReductionFilter");
  nvnSamplerCompare = resolve(device, "nvnSamplerCompare");
  nvnSamplerGetDebugID = resolve(device, "nvnSamplerGetDebugID");
  nvnBlendStateSetDefaults = resolve(device, "nvnBlendStateSetDefaults");
  nvnBlendStateSetBlendTarget = resolve(device, "nvnBlendStateSetBlendTarget");
  nvnBlendStateSetBlendFunc = resolve(device, "nvnBlendStateSetBlendFunc");
  nvnBlendStateSetBlendEquation =
      resolve(device, "nvnBlendStateSetBlendEquation");
  nvnBlendStateSetAdvancedMode =
      resolve(device, "nvnBlendStateSetAdvancedMode");
  nvnBlendStateSetAdvancedOverlap =
      resolve(device, "nvnBlendStateSetAdvancedOverlap");
  nvnBlendStateSetAdvancedPremultipliedSrc =
      resolve(device, "nvnBlendStateSetAdvancedPremultipliedSrc");
  nvnBlendStateSetAdvancedNormalizedDst =
      resolve(device, "nvnBlendStateSetAdvancedNormalizedDst");
  nvnBlendStateGetBlendTarget = resolve(device, "nvnBlendStateGetBlendTarget");
  nvnBlendStateGetBlendFunc = resolve(device, "nvnBlendStateGetBlendFunc");
  nvnBlendStateGetBlendEquation =
      resolve(device, "nvnBlendStateGetBlendEquation");
  nvnBlendStateGetAdvancedMode =
      resolve(device, "nvnBlendStateGetAdvancedMode");
  nvnBlendStateGetAdvancedOverlap =
      resolve(device, "nvnBlendStateGetAdvancedOverlap");
  nvnBlendStateGetAdvancedPremultipliedSrc =
      resolve(device, "nvnBlendStateGetAdvancedPremultipliedSrc");
  nvnBlendStateGetAdvancedNormalizedDst =
      resolve(device, "nvnBlendStateGetAdvancedNormalizedDst");
  nvnColorStateSetDefaults = resolve(device, "nvnColorStateSetDefaults");
  nvnColorStateSetBlendEnable = resolve(device, "nvnColorStateSetBlendEnable");
  nvnColorStateSetLogicOp = resolve(device, "nvnColorStateSetLogicOp");
  nvnColorStateSetAlphaTest = resolve(device, "nvnColorStateSetAlphaTest");
  nvnColorStateGetBlendEnable = resolve(device, "nvnColorStateGetBlendEnable");
  nvnColorStateGetLogicOp = resolve(device, "nvnColorStateGetLogicOp");
  nvnColorStateGetAlphaTest = resolve(device, "nvnColorStateGetAlphaTest");
  nvnChannelMaskStateSetDefaults =
      resolve(device, "nvnChannelMaskStateSetDefaults");
  nvnChannelMaskStateSetChannelMask =
      resolve(device, "nvnChannelMaskStateSetChannelMask");
  nvnChannelMaskStateGetChannelMask =
      resolve(device, "nvnChannelMaskStateGetChannelMask");
  nvnMultisampleStateSetDefaults =
      resolve(device, "nvnMultisampleStateSetDefaults");
  nvnMultisampleStateSetMultisampleEnable =
      resolve(device, "nvnMultisampleStateSetMultisampleEnable");
  nvnMultisampleStateSetSamples =
      resolve(device, "nvnMultisampleStateSetSamples");
  nvnMultisampleStateSetAlphaToCoverageEnable =
      resolve(device, "nvnMultisampleStateSetAlphaToCoverageEnable");
  nvnMultisampleStateSetAlphaToCoverageDither =
      resolve(device, "nvnMultisampleStateSetAlphaToCoverageDither");
  nvnMultisampleStateGetMultisampleEnable =
      resolve(device, "nvnMultisampleStateGetMultisampleEnable");
  nvnMultisampleStateGetSamples =
      resolve(device, "nvnMultisampleStateGetSamples");
  nvnMultisampleStateGetAlphaToCoverageEnable =
      resolve(device, "nvnMultisampleStateGetAlphaToCoverageEnable");
  nvnMultisampleStateGetAlphaToCoverageDither =
      resolve(device, "nvnMultisampleStateGetAlphaToCoverageDither");
  nvnMultisampleStateSetRasterSamples =
      resolve(device, "nvnMultisampleStateSetRasterSamples");
  nvnMultisampleStateGetRasterSamples =
      resolve(device, "nvnMultisampleStateGetRasterSamples");
  nvnMultisampleStateSetCoverageModulationMode =
      resolve(device, "nvnMultisampleStateSetCoverageModulationMode");
  nvnMultisampleStateGetCoverageModulationMode =
      resolve(device, "nvnMultisampleStateGetCoverageModulationMode");
  nvnMultisampleStateSetCoverageToColorEnable =
      resolve(device, "nvnMultisampleStateSetCoverageToColorEnable");
  nvnMultisampleStateGetCoverageToColorEnable =
      resolve(device, "nvnMultisampleStateGetCoverageToColorEnable");
  nvnMultisampleStateSetCoverageToColorOutput =
      resolve(device, "nvnMultisampleStateSetCoverageToColorOutput");
  nvnMultisampleStateGetCoverageToColorOutput =
      resolve(device, "nvnMultisampleStateGetCoverageToColorOutput");
  nvnMultisampleStateSetSampleLocationsEnable =
      resolve(device, "nvnMultisampleStateSetSampleLocationsEnable");
  nvnMultisampleStateGetSampleLocationsEnable =
      resolve(device, "nvnMultisampleStateGetSampleLocationsEnable");
  nvnMultisampleStateGetSampleLocationsGrid =
      resolve(device, "nvnMultisampleStateGetSampleLocationsGrid");
  nvnMultisampleStateSetSampleLocationsGridEnable =
      resolve(device, "nvnMultisampleStateSetSampleLocationsGridEnable");
  nvnMultisampleStateGetSampleLocationsGridEnable =
      resolve(device, "nvnMultisampleStateGetSampleLocationsGridEnable");
  nvnMultisampleStateSetSampleLocations =
      resolve(device, "nvnMultisampleStateSetSampleLocations");
  nvnPolygonStateSetDefaults = resolve(device, "nvnPolygonStateSetDefaults");
  nvnPolygonStateSetCullFace = resolve(device, "nvnPolygonStateSetCullFace");
  nvnPolygonStateSetFrontFace = resolve(device, "nvnPolygonStateSetFrontFace");
  nvnPolygonStateSetPolygonMode =
      resolve(device, "nvnPolygonStateSetPolygonMode");
  nvnPolygonStateSetPolygonOffsetEnables =
      resolve(device, "nvnPolygonStateSetPolygonOffsetEnables");
  nvnPolygonStateGetCullFace = resolve(device, "nvnPolygonStateGetCullFace");
  nvnPolygonStateGetFrontFace = resolve(device, "nvnPolygonStateGetFrontFace");
  nvnPolygonStateGetPolygonMode =
      resolve(device, "nvnPolygonStateGetPolygonMode");
  nvnPolygonStateGetPolygonOffsetEnables =
      resolve(device, "nvnPolygonStateGetPolygonOffsetEnables");
  nvnDepthStencilStateSetDefaults =
      resolve(device, "nvnDepthStencilStateSetDefaults");
  nvnDepthStencilStateSetDepthTestEnable =
      resolve(device, "nvnDepthStencilStateSetDepthTestEnable");
  nvnDepthStencilStateSetDepthWriteEnable =
      resolve(device, "nvnDepthStencilStateSetDepthWriteEnable");
  nvnDepthStencilStateSetDepthFunc =
      resolve(device, "nvnDepthStencilStateSetDepthFunc");
  nvnDepthStencilStateSetStencilTestEnable =
      resolve(device, "nvnDepthStencilStateSetStencilTestEnable");
  nvnDepthStencilStateSetStencilFunc =
      resolve(device, "nvnDepthStencilStateSetStencilFunc");
  nvnDepthStencilStateSetStencilOp =
      resolve(device, "nvnDepthStencilStateSetStencilOp");
  nvnDepthStencilStateGetDepthTestEnable =
      resolve(device, "nvnDepthStencilStateGetDepthTestEnable");
  nvnDepthStencilStateGetDepthWriteEnable =
      resolve(device, "nvnDepthStencilStateGetDepthWriteEnable");
  nvnDepthStencilStateGetDepthFunc =
      resolve(device, "nvnDepthStencilStateGetDepthFunc");
  nvnDepthStencilStateGetStencilTestEnable =
      resolve(device, "nvnDepthStencilStateGetStencilTestEnable");
  nvnDepthStencilStateGetStencilFunc =
      resolve(device, "nvnDepthStencilStateGetStencilFunc");
  nvnDepthStencilStateGetStencilOp =
      resolve(device, "nvnDepthStencilStateGetStencilOp");
  nvnVertexAttribStateSetDefaults =
      resolve(device, "nvnVertexAttribStateSetDefaults");
  nvnVertexAttribStateSetFormat =
      resolve(device, "nvnVertexAttribStateSetFormat");
  nvnVertexAttribStateSetStreamIndex =
      resolve(device, "nvnVertexAttribStateSetStreamIndex");
  nvnVertexAttribStateGetFormat =
      resolve(device, "nvnVertexAttribStateGetFormat");
  nvnVertexAttribStateGetStreamIndex =
      resolve(device, "nvnVertexAttribStateGetStreamIndex");
  nvnVertexStreamStateSetDefaults =
      resolve(device, "nvnVertexStreamStateSetDefaults");
  nvnVertexStreamStateSetStride =
      resolve(device, "nvnVertexStreamStateSetStride");
  nvnVertexStreamStateSetDivisor =
      resolve(device, "nvnVertexStreamStateSetDivisor");
  nvnVertexStreamStateGetStride =
      resolve(device, "nvnVertexStreamStateGetStride");
  nvnVertexStreamStateGetDivisor =
      resolve(device, "nvnVertexStreamStateGetDivisor");
  nvnCommandBufferInitialize = resolve(device, "nvnCommandBufferInitialize");
  nvnCommandBufferFinalize = resolve(device, "nvnCommandBufferFinalize");
  nvnCommandBufferSetDebugLabel =
      resolve(device, "nvnCommandBufferSetDebugLabel");
  nvnCommandBufferSetMemoryCallback =
      resolve(device, "nvnCommandBufferSetMemoryCallback");
  nvnCommandBufferSetMemoryCallbackData =
      resolve(device, "nvnCommandBufferSetMemoryCallbackData");
  nvnCommandBufferSetCommandMemoryCallbackEnabled =
      resolve(device, "nvnCommandBufferSetCommandMemoryCallbackEnabled");
  nvnCommandBufferAddCommandMemory =
      resolve(device, "nvnCommandBufferAddCommandMemory");
  nvnCommandBufferAddControlMemory =
      resolve(device, "nvnCommandBufferAddControlMemory");
  nvnCommandBufferGetCommandMemorySize =
      resolve(device, "nvnCommandBufferGetCommandMemorySize");
  nvnCommandBufferGetCommandMemoryUsed =
      resolve(device, "nvnCommandBufferGetCommandMemoryUsed");
  nvnCommandBufferGetCommandMemoryFree =
      resolve(device, "nvnCommandBufferGetCommandMemoryFree");
  nvnCommandBufferGetControlMemorySize =
      resolve(device, "nvnCommandBufferGetControlMemorySize");
  nvnCommandBufferGetControlMemoryUsed =
      resolve(device, "nvnCommandBufferGetControlMemoryUsed");
  nvnCommandBufferGetControlMemoryFree =
      resolve(device, "nvnCommandBufferGetControlMemoryFree");
  nvnCommandBufferBeginRecording =
      resolve(device, "nvnCommandBufferBeginRecording");
  nvnCommandBufferEndRecording =
      resolve(device, "nvnCommandBufferEndRecording");
  nvnCommandBufferCallCommands =
      resolve(device, "nvnCommandBufferCallCommands");
  nvnCommandBufferCopyCommands =
      resolve(device, "nvnCommandBufferCopyCommands");
  nvnCommandBufferBindBlendState =
      resolve(device, "nvnCommandBufferBindBlendState");
  nvnCommandBufferBindChannelMaskState =
      resolve(device, "nvnCommandBufferBindChannelMaskState");
  nvnCommandBufferBindColorState =
      resolve(device, "nvnCommandBufferBindColorState");
  nvnCommandBufferBindMultisampleState =
      resolve(device, "nvnCommandBufferBindMultisampleState");
  nvnCommandBufferBindPolygonState =
      resolve(device, "nvnCommandBufferBindPolygonState");
  nvnCommandBufferBindDepthStencilState =
      resolve(device, "nvnCommandBufferBindDepthStencilState");
  nvnCommandBufferBindVertexAttribState =
      resolve(device, "nvnCommandBufferBindVertexAttribState");
  nvnCommandBufferBindVertexStreamState =
      resolve(device, "nvnCommandBufferBindVertexStreamState");
  nvnCommandBufferBindProgram = resolve(device, "nvnCommandBufferBindProgram");
  nvnCommandBufferBindVertexBuffer =
      resolve(device, "nvnCommandBufferBindVertexBuffer");
  nvnCommandBufferBindVertexBuffers =
      resolve(device, "nvnCommandBufferBindVertexBuffers");
  nvnCommandBufferBindUniformBuffer =
      resolve(device, "nvnCommandBufferBindUniformBuffer");
  nvnCommandBufferBindUniformBuffers =
      resolve(device, "nvnCommandBufferBindUniformBuffers");
  nvnCommandBufferBindTransformFeedbackBuffer =
      resolve(device, "nvnCommandBufferBindTransformFeedbackBuffer");
  nvnCommandBufferBindTransformFeedbackBuffers =
      resolve(device, "nvnCommandBufferBindTransformFeedbackBuffers");
  nvnCommandBufferBindStorageBuffer =
      resolve(device, "nvnCommandBufferBindStorageBuffer");
  nvnCommandBufferBindStorageBuffers =
      resolve(device, "nvnCommandBufferBindStorageBuffers");
  nvnCommandBufferBindTexture = resolve(device, "nvnCommandBufferBindTexture");
  nvnCommandBufferBindTextures =
      resolve(device, "nvnCommandBufferBindTextures");
  nvnCommandBufferBindImage = resolve(device, "nvnCommandBufferBindImage");
  nvnCommandBufferBindImages = resolve(device, "nvnCommandBufferBindImages");
  nvnCommandBufferSetPatchSize =
      resolve(device, "nvnCommandBufferSetPatchSize");
  nvnCommandBufferSetInnerTessellationLevels =
      resolve(device, "nvnCommandBufferSetInnerTessellationLevels");
  nvnCommandBufferSetOuterTessellationLevels =
      resolve(device, "nvnCommandBufferSetOuterTessellationLevels");
  nvnCommandBufferSetPrimitiveRestart =
      resolve(device, "nvnCommandBufferSetPrimitiveRestart");
  nvnCommandBufferBeginTransformFeedback =
      resolve(device, "nvnCommandBufferBeginTransformFeedback");
  nvnCommandBufferEndTransformFeedback =
      resolve(device, "nvnCommandBufferEndTransformFeedback");
  nvnCommandBufferPauseTransformFeedback =
      resolve(device, "nvnCommandBufferPauseTransformFeedback");
  nvnCommandBufferResumeTransformFeedback =
      resolve(device, "nvnCommandBufferResumeTransformFeedback");
  nvnCommandBufferDrawTransformFeedback =
      resolve(device, "nvnCommandBufferDrawTransformFeedback");
  nvnCommandBufferDrawArrays = resolve(device, "nvnCommandBufferDrawArrays");
  nvnCommandBufferDrawElements =
      resolve(device, "nvnCommandBufferDrawElements");
  nvnCommandBufferDrawElementsBaseVertex =
      resolve(device, "nvnCommandBufferDrawElementsBaseVertex");
  nvnCommandBufferDrawArraysInstanced =
      resolve(device, "nvnCommandBufferDrawArraysInstanced");
  nvnCommandBufferDrawElementsInstanced =
      resolve(device, "nvnCommandBufferDrawElementsInstanced");
  nvnCommandBufferDrawArraysIndirect =
      resolve(device, "nvnCommandBufferDrawArraysIndirect");
  nvnCommandBufferDrawElementsIndirect =
      resolve(device, "nvnCommandBufferDrawElementsIndirect");
  nvnCommandBufferMultiDrawArraysIndirectCount =
      resolve(device, "nvnCommandBufferMultiDrawArraysIndirectCount");
  nvnCommandBufferMultiDrawElementsIndirectCount =
      resolve(device, "nvnCommandBufferMultiDrawElementsIndirectCount");
  nvnCommandBufferClearColor = resolve(device, "nvnCommandBufferClearColor");
  nvnCommandBufferClearColori = resolve(device, "nvnCommandBufferClearColori");
  nvnCommandBufferClearColorui =
      resolve(device, "nvnCommandBufferClearColorui");
  nvnCommandBufferClearDepthStencil =
      resolve(device, "nvnCommandBufferClearDepthStencil");
  nvnCommandBufferDispatchCompute =
      resolve(device, "nvnCommandBufferDispatchCompute");
  nvnCommandBufferDispatchComputeIndirect =
      resolve(device, "nvnCommandBufferDispatchComputeIndirect");
  nvnCommandBufferSetViewport = resolve(device, "nvnCommandBufferSetViewport");
  nvnCommandBufferSetViewports =
      resolve(device, "nvnCommandBufferSetViewports");
  nvnCommandBufferSetViewportSwizzles =
      resolve(device, "nvnCommandBufferSetViewportSwizzles");
  nvnCommandBufferSetScissor = resolve(device, "nvnCommandBufferSetScissor");
  nvnCommandBufferSetScissors = resolve(device, "nvnCommandBufferSetScissors");
  nvnCommandBufferSetDepthRange =
      resolve(device, "nvnCommandBufferSetDepthRange");
  nvnCommandBufferSetDepthBounds =
      resolve(device, "nvnCommandBufferSetDepthBounds");
  nvnCommandBufferSetDepthRanges =
      resolve(device, "nvnCommandBufferSetDepthRanges");
  nvnCommandBufferSetTiledCacheAction =
      resolve(device, "nvnCommandBufferSetTiledCacheAction");
  nvnCommandBufferSetTiledCacheTileSize =
      resolve(device, "nvnCommandBufferSetTiledCacheTileSize");
  nvnCommandBufferBindSeparateTexture =
      resolve(device, "nvnCommandBufferBindSeparateTexture");
  nvnCommandBufferBindSeparateSampler =
      resolve(device, "nvnCommandBufferBindSeparateSampler");
  nvnCommandBufferBindSeparateTextures =
      resolve(device, "nvnCommandBufferBindSeparateTextures");
  nvnCommandBufferBindSeparateSamplers =
      resolve(device, "nvnCommandBufferBindSeparateSamplers");
  nvnCommandBufferSetStencilValueMask =
      resolve(device, "nvnCommandBufferSetStencilValueMask");
  nvnCommandBufferSetStencilMask =
      resolve(device, "nvnCommandBufferSetStencilMask");
  nvnCommandBufferSetStencilRef =
      resolve(device, "nvnCommandBufferSetStencilRef");
  nvnCommandBufferSetBlendColor =
      resolve(device, "nvnCommandBufferSetBlendColor");
  nvnCommandBufferSetPointSize =
      resolve(device, "nvnCommandBufferSetPointSize");
  nvnCommandBufferSetLineWidth =
      resolve(device, "nvnCommandBufferSetLineWidth");
  nvnCommandBufferSetPolygonOffsetClamp =
      resolve(device, "nvnCommandBufferSetPolygonOffsetClamp");
  nvnCommandBufferSetAlphaRef = resolve(device, "nvnCommandBufferSetAlphaRef");
  nvnCommandBufferSetSampleMask =
      resolve(device, "nvnCommandBufferSetSampleMask");
  nvnCommandBufferSetRasterizerDiscard =
      resolve(device, "nvnCommandBufferSetRasterizerDiscard");
  nvnCommandBufferSetDepthClamp =
      resolve(device, "nvnCommandBufferSetDepthClamp");
  nvnCommandBufferSetConservativeRasterEnable =
      resolve(device, "nvnCommandBufferSetConservativeRasterEnable");
  nvnCommandBufferSetConservativeRasterDilate =
      resolve(device, "nvnCommandBufferSetConservativeRasterDilate");
  nvnCommandBufferSetSubpixelPrecisionBias =
      resolve(device, "nvnCommandBufferSetSubpixelPrecisionBias");
  nvnCommandBufferCopyBufferToTexture =
      resolve(device, "nvnCommandBufferCopyBufferToTexture");
  nvnCommandBufferCopyTextureToBuffer =
      resolve(device, "nvnCommandBufferCopyTextureToBuffer");
  nvnCommandBufferCopyTextureToTexture =
      resolve(device, "nvnCommandBufferCopyTextureToTexture");
  nvnCommandBufferCopyBufferToBuffer =
      resolve(device, "nvnCommandBufferCopyBufferToBuffer");
  nvnCommandBufferClearBuffer = resolve(device, "nvnCommandBufferClearBuffer");
  nvnCommandBufferClearTexture =
      resolve(device, "nvnCommandBufferClearTexture");
  nvnCommandBufferClearTexturei =
      resolve(device, "nvnCommandBufferClearTexturei");
  nvnCommandBufferClearTextureui =
      resolve(device, "nvnCommandBufferClearTextureui");
  nvnCommandBufferUpdateUniformBuffer =
      resolve(device, "nvnCommandBufferUpdateUniformBuffer");
  nvnCommandBufferReportCounter =
      resolve(device, "nvnCommandBufferReportCounter");
  nvnCommandBufferResetCounter =
      resolve(device, "nvnCommandBufferResetCounter");
  nvnCommandBufferReportValue = resolve(device, "nvnCommandBufferReportValue");
  nvnCommandBufferSetRenderEnable =
      resolve(device, "nvnCommandBufferSetRenderEnable");
  nvnCommandBufferSetRenderEnableConditional =
      resolve(device, "nvnCommandBufferSetRenderEnableConditional");
  nvnCommandBufferSetRenderTargets =
      resolve(device, "nvnCommandBufferSetRenderTargets");
  nvnCommandBufferDiscardColor =
      resolve(device, "nvnCommandBufferDiscardColor");
  nvnCommandBufferDiscardDepthStencil =
      resolve(device, "nvnCommandBufferDiscardDepthStencil");
  nvnCommandBufferDownsample = resolve(device, "nvnCommandBufferDownsample");
  nvnCommandBufferTiledDownsample =
      resolve(device, "nvnCommandBufferTiledDownsample");
  nvnCommandBufferDownsampleTextureView =
      resolve(device, "nvnCommandBufferDownsampleTextureView");
  nvnCommandBufferTiledDownsampleTextureView =
      resolve(device, "nvnCommandBufferTiledDownsampleTextureView");
  nvnCommandBufferBarrier = resolve(device, "nvnCommandBufferBarrier");
  nvnCommandBufferWaitSync = resolve(device, "nvnCommandBufferWaitSync");
  nvnCommandBufferFenceSync = resolve(device, "nvnCommandBufferFenceSync");
  nvnCommandBufferSetTexturePool =
      resolve(device, "nvnCommandBufferSetTexturePool");
  nvnCommandBufferSetSamplerPool =
      resolve(device, "nvnCommandBufferSetSamplerPool");
  nvnCommandBufferSetShaderScratchMemory =
      resolve(device, "nvnCommandBufferSetShaderScratchMemory");
  nvnCommandBufferSaveZCullData =
      resolve(device, "nvnCommandBufferSaveZCullData");
  nvnCommandBufferRestoreZCullData =
      resolve(device, "nvnCommandBufferRestoreZCullData");
  nvnCommandBufferSetCopyRowStride =
      resolve(device, "nvnCommandBufferSetCopyRowStride");
  nvnCommandBufferSetCopyImageStride =
      resolve(device, "nvnCommandBufferSetCopyImageStride");
  nvnCommandBufferGetCopyRowStride =
      resolve(device, "nvnCommandBufferGetCopyRowStride");
  nvnCommandBufferGetCopyImageStride =
      resolve(device, "nvnCommandBufferGetCopyImageStride");
  nvnCommandBufferDrawTexture = resolve(device, "nvnCommandBufferDrawTexture");
  nvnProgramSetSubroutineLinkage =
      resolve(device, "nvnProgramSetSubroutineLinkage");
  nvnCommandBufferSetProgramSubroutines =
      resolve(device, "nvnCommandBufferSetProgramSubroutines");
  nvnCommandBufferBindCoverageModulationTable =
      resolve(device, "nvnCommandBufferBindCoverageModulationTable");
  nvnCommandBufferResolveDepthBuffer =
      resolve(device, "nvnCommandBufferResolveDepthBuffer");
  nvnCommandBufferSetColorReductionEnable =
      resolve(device, "nvnCommandBufferSetColorReductionEnable");
  nvnCommandBufferSetColorReductionThresholds =
      resolve(device, "nvnCommandBufferSetColorReductionThresholds");
  nvnCommandBufferPushDebugGroupStatic =
      resolve(device, "nvnCommandBufferPushDebugGroupStatic");
  nvnCommandBufferPushDebugGroupDynamic =
      resolve(device, "nvnCommandBufferPushDebugGroupDynamic");
  nvnCommandBufferPushDebugGroup =
      resolve(device, "nvnCommandBufferPushDebugGroup");
  nvnCommandBufferPopDebugGroup =
      resolve(device, "nvnCommandBufferPopDebugGroup");
  nvnCommandBufferPopDebugGroupId =
      resolve(device, "nvnCommandBufferPopDebugGroupId");
  nvnCommandBufferInsertDebugMarkerStatic =
      resolve(device, "nvnCommandBufferInsertDebugMarkerStatic");
  nvnCommandBufferInsertDebugMarkerDynamic =
      resolve(device, "nvnCommandBufferInsertDebugMarkerDynamic");
  nvnCommandBufferInsertDebugMarker =
      resolve(device, "nvnCommandBufferInsertDebugMarker");
  nvnCommandBufferGetMemoryCallback =
      resolve(device, "nvnCommandBufferGetMemoryCallback");
  nvnCommandBufferGetMemoryCallbackData =
      resolve(device, "nvnCommandBufferGetMemoryCallbackData");
  nvnCommandBufferIsRecording = resolve(device, "nvnCommandBufferIsRecording");
  nvnSyncInitialize = resolve(device, "nvnSyncInitialize");
  nvnSyncFinalize = resolve(device, "nvnSyncFinalize");
  nvnSyncSetDebugLabel = resolve(device, "nvnSyncSetDebugLabel");
  nvnQueueFenceSync = resolve(device, "nvnQueueFenceSync");
  nvnSyncWait = resolve(device, "nvnSyncWait");
  nvnQueueWaitSync = resolve(device, "nvnQueueWaitSync");
  nvnSyncInitializeFromFencedGLSync =
      resolve(device, "nvnSyncInitializeFromFencedGLSync");
  nvnSyncCreateGLSync = resolve(device, "nvnSyncCreateGLSync");
  nvnEventBuilderSetDefaults = resolve(device, "nvnEventBuilderSetDefaults");
  nvnEventBuilderSetStorage = resolve(device, "nvnEventBuilderSetStorage");
  nvnEventBuilderGetStorage = resolve(device, "nvnEventBuilderGetStorage");
  nvnEventBuilderGetMemoryPool =
      resolve(device, "nvnEventBuilderGetMemoryPool");
  nvnEventBuilderGetMemoryOffset =
      resolve(device, "nvnEventBuilderGetMemoryOffset");
  nvnEventInitialize = resolve(device, "nvnEventInitialize");
  nvnEventFinalize = resolve(device, "nvnEventFinalize");
  nvnEventGetValue = resolve(device, "nvnEventGetValue");
  nvnEventSignal = resolve(device, "nvnEventSignal");
  nvnEventGetMemoryPool = resolve(device, "nvnEventGetMemoryPool");
  nvnEventGetMemoryOffset = resolve(device, "nvnEventGetMemoryOffset");
  nvnCommandBufferWaitEvent = resolve(device, "nvnCommandBufferWaitEvent");
  nvnCommandBufferSignalEvent = resolve(device, "nvnCommandBufferSignalEvent");
  nvnCommandBufferSetStencilCullCriteria =
      resolve(device, "nvnCommandBufferSetStencilCullCriteria");
}
}
