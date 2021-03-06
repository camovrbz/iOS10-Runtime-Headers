/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLToolsDevice : MTLToolsObject <MTLDeviceSPI> {
    MTLToolsPointerArray * _buffers;
    MTLToolsPointerArray * _commandQueues;
    MTLToolsPointerArray * _computePipelineStates;
    MTLToolsPointerArray * _depthStencilStates;
    MTLToolsPointerArray * _fences;
    MTLToolsPointerArray * _functions;
    MTLToolsPointerArray * _heaps;
    bool  _integrated;
    MTLToolsPointerArray * _libraries;
    unsigned long long  _memorySize;
    MTLToolsPointerArray * _pipelineStates;
    MTLToolsPointerArray * _samplers;
    MTLToolsPointerArray * _textureLayouts;
    MTLToolsPointerArray * _textures;
}

@property (readonly) unsigned int acceleratorPort;
@property (nonatomic, readonly) MTLToolsPointerArray *buffers;
@property (nonatomic, readonly) MTLToolsPointerArray *commandQueues;
@property (nonatomic, readonly) MTLToolsPointerArray *computePipelineStates;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long dedicatedMemorySize;
@property (getter=isDepth24Stencil8PixelFormatSupported, readonly) bool depth24Stencil8PixelFormatSupported;
@property (nonatomic, readonly) MTLToolsPointerArray *depthStencilStates;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long deviceLinearReadOnlyTextureAlignmentBytes;
@property (readonly) unsigned long long deviceLinearTextureAlignmentBytes;
@property (readonly) unsigned long long doubleFPConfig;
@property (readonly) unsigned long long featureProfile;
@property (nonatomic, readonly) MTLToolsPointerArray *fences;
@property (nonatomic, readonly) MTLToolsPointerArray *functions;
@property (readonly) unsigned long long halfFPConfig;
@property (readonly) unsigned long long hash;
@property (getter=isHeadless, readonly) bool headless;
@property (nonatomic, readonly) MTLToolsPointerArray *heaps;
@property (getter=isIntegrated, readonly) bool integrated;
@property (readonly) unsigned long long iosurfaceReadOnlyTextureAlignmentBytes;
@property (readonly) unsigned long long iosurfaceTextureAlignmentBytes;
@property (nonatomic, readonly) MTLToolsPointerArray *libraries;
@property (readonly) const struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; float x19; float x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned int x25; unsigned int x26; unsigned int x27; unsigned int x28; unsigned int x29; unsigned int x30; unsigned int x31; unsigned int x32; unsigned int x33; unsigned int x34; unsigned int x35; unsigned int x36; unsigned int x37; unsigned int x38; unsigned int x39; unsigned int x40; unsigned int x41; }*limits;
@property (readonly) unsigned long long linearTextureAlignmentBytes;
@property (getter=isLowPower, readonly) bool lowPower;
@property (readonly) unsigned long long maxBufferLength;
@property (readonly) unsigned long long maxColorAttachments;
@property (readonly) unsigned long long maxComputeBuffers;
@property (readonly) unsigned long long maxComputeInlineDataSize;
@property (readonly) unsigned long long maxComputeLocalMemorySizes;
@property (readonly) unsigned long long maxComputeSamplers;
@property (readonly) unsigned long long maxComputeTextures;
@property (readonly) unsigned long long maxComputeThreadgroupMemory;
@property (readonly) unsigned long long maxComputeThreadgroupMemoryAlignmentBytes;
@property (readonly) unsigned long long maxFragmentBuffers;
@property (readonly) unsigned long long maxFragmentInlineDataSize;
@property (readonly) unsigned long long maxFragmentSamplers;
@property (readonly) unsigned long long maxFragmentTextures;
@property (readonly) unsigned long long maxFramebufferStorageBits;
@property (readonly) unsigned long long maxFunctionConstantIndices;
@property (readonly) unsigned long long maxInterpolants;
@property (readonly) unsigned long long maxInterpolatedComponents;
@property (readonly) float maxLineWidth;
@property (readonly) float maxPointSize;
@property (readonly) unsigned long long maxTextureDepth3D;
@property (readonly) unsigned long long maxTextureDimensionCube;
@property (readonly) unsigned long long maxTextureHeight2D;
@property (readonly) unsigned long long maxTextureHeight3D;
@property (readonly) unsigned long long maxTextureLayers;
@property (readonly) unsigned long long maxTextureWidth1D;
@property (readonly) unsigned long long maxTextureWidth2D;
@property (readonly) unsigned long long maxTextureWidth3D;
@property (readonly) struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; } maxThreadsPerThreadgroup;
@property (readonly) unsigned long long maxTotalComputeThreadsPerThreadgroup;
@property (readonly) unsigned long long maxVertexAttributes;
@property (readonly) unsigned long long maxVertexBuffers;
@property (readonly) unsigned long long maxVertexInlineDataSize;
@property (readonly) unsigned long long maxVertexSamplers;
@property (readonly) unsigned long long maxVertexTextures;
@property (readonly) unsigned long long maxVisibilityQueryOffset;
@property (readonly) unsigned long long memorySize;
@property (nonatomic) bool metalAssertionsEnabled;
@property (readonly) unsigned long long minBufferNoCopyAlignmentBytes;
@property (readonly) unsigned long long minConstantBufferAlignmentBytes;
@property (readonly) NSString *name;
@property (nonatomic, readonly) MTLToolsPointerArray *pipelineStates;
@property (readonly) unsigned long long recommendedMaxWorkingSetSize;
@property (nonatomic, readonly) MTLToolsPointerArray *samplers;
@property bool shaderDebugInfoCaching;
@property (readonly) unsigned long long sharedMemorySize;
@property (readonly) unsigned long long singleFPConfig;
@property (readonly) Class superclass;
@property (nonatomic, readonly) MTLToolsPointerArray *textureLayouts;
@property (nonatomic, readonly) MTLToolsPointerArray *textures;

+ (void)registerDevices;

- (void).cxx_destruct;
- (unsigned int)acceleratorPort;
- (void)acceptVisitor:(id)arg1;
- (id)buffers;
- (id)commandQueues;
- (void)compilerPropagatesThreadPriority:(bool)arg1;
- (id)computePipelineStates;
- (unsigned long long)dedicatedMemorySize;
- (id)depthStencilStates;
- (unsigned long long)deviceLinearReadOnlyTextureAlignmentBytes;
- (unsigned long long)deviceLinearTextureAlignmentBytes;
- (bool)deviceOrFeatureProfileSupportsFeatureSet:(unsigned long long)arg1;
- (bool)deviceSupportsFeatureSet:(unsigned long long)arg1;
- (unsigned long long)doubleFPConfig;
- (id)familyName;
- (unsigned long long)featureProfile;
- (id)fences;
- (id)functions;
- (void*)getShaderCacheKeys;
- (unsigned long long)halfFPConfig;
- (struct { unsigned long long x1; unsigned long long x2; })heapBufferSizeAndAlignWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (struct { unsigned long long x1; unsigned long long x2; })heapTextureSizeAndAlignWithDescriptor:(id)arg1;
- (id)heaps;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (unsigned long long)iosurfaceReadOnlyTextureAlignmentBytes;
- (unsigned long long)iosurfaceTextureAlignmentBytes;
- (bool)isDepth24Stencil8PixelFormatSupported;
- (bool)isHeadless;
- (bool)isIntegrated;
- (bool)isLowPower;
- (id)libraries;
- (struct { unsigned int x1; unsigned int x2; })libraryCacheStats;
- (const struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; float x19; float x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned int x25; unsigned int x26; unsigned int x27; unsigned int x28; unsigned int x29; unsigned int x30; unsigned int x31; unsigned int x32; unsigned int x33; unsigned int x34; unsigned int x35; unsigned int x36; unsigned int x37; unsigned int x38; unsigned int x39; unsigned int x40; unsigned int x41; }*)limits;
- (unsigned long long)linearTextureAlignmentBytes;
- (bool)mapShaderSampleBufferWithBuffer:(struct { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1 capacity:(unsigned long long)arg2 size:(unsigned long long)arg3;
- (unsigned long long)maxBufferLength;
- (unsigned long long)maxColorAttachments;
- (unsigned long long)maxComputeBuffers;
- (unsigned long long)maxComputeInlineDataSize;
- (unsigned long long)maxComputeLocalMemorySizes;
- (unsigned long long)maxComputeSamplers;
- (unsigned long long)maxComputeTextures;
- (unsigned long long)maxComputeThreadgroupMemory;
- (unsigned long long)maxComputeThreadgroupMemoryAlignmentBytes;
- (unsigned long long)maxFragmentBuffers;
- (unsigned long long)maxFragmentInlineDataSize;
- (unsigned long long)maxFragmentSamplers;
- (unsigned long long)maxFragmentTextures;
- (unsigned long long)maxFramebufferStorageBits;
- (unsigned long long)maxFunctionConstantIndices;
- (unsigned long long)maxInterpolants;
- (unsigned long long)maxInterpolatedComponents;
- (float)maxLineWidth;
- (float)maxPointSize;
- (unsigned long long)maxTextureDepth3D;
- (unsigned long long)maxTextureDimensionCube;
- (unsigned long long)maxTextureHeight2D;
- (unsigned long long)maxTextureHeight3D;
- (unsigned long long)maxTextureLayers;
- (unsigned long long)maxTextureWidth1D;
- (unsigned long long)maxTextureWidth2D;
- (unsigned long long)maxTextureWidth3D;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })maxThreadsPerThreadgroup;
- (unsigned long long)maxTotalComputeThreadsPerThreadgroup;
- (unsigned long long)maxVertexAttributes;
- (unsigned long long)maxVertexBuffers;
- (unsigned long long)maxVertexInlineDataSize;
- (unsigned long long)maxVertexSamplers;
- (unsigned long long)maxVertexTextures;
- (unsigned long long)maxVisibilityQueryOffset;
- (unsigned long long)memorySize;
- (bool)metalAssertionsEnabled;
- (unsigned long long)minBufferNoCopyAlignmentBytes;
- (unsigned long long)minConstantBufferAlignmentBytes;
- (id)name;
- (id)newBufferWithBytes:(const void*)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id)newBufferWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 deallocator:(id /* block */)arg4;
- (id)newBufferWithIOSurface:(struct __IOSurface { }*)arg1;
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (id)newCommandQueue;
- (id)newCommandQueueWithDescriptor:(id)arg1;
- (id)newCommandQueueWithMaxCommandBufferCount:(unsigned long long)arg1;
- (void)newComputePipelineStateWithDescriptor:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)newComputePipelineStateWithDescriptor:(id)arg1 error:(id*)arg2;
- (void)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (void)newComputePipelineStateWithFunction:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)newComputePipelineStateWithFunction:(id)arg1 error:(id*)arg2;
- (void)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (id)newComputePipelineStateWithImageFilterFunctionsSPI:(id)arg1 imageFilterFunctionInfo:(const struct { bool x1; unsigned long long x2; struct { /* ? */ } *x3; }*)arg2 error:(id*)arg3;
- (id)newDefaultLibrary;
- (id)newDefaultLibraryWithBundle:(id)arg1 error:(id*)arg2;
- (id)newDepthStencilStateWithDescriptor:(id)arg1;
- (id)newFence;
- (id)newFunctionWithGLIR:(void*)arg1 functionType:(unsigned long long)arg2;
- (id)newFunctionWithGLIR:(void*)arg1 inputsDescription:(id)arg2 functionType:(unsigned long long)arg3;
- (id)newHeapWithDescriptor:(id)arg1;
- (id)newLibraryWithData:(id)arg1 error:(id*)arg2;
- (id)newLibraryWithFile:(id)arg1 error:(id*)arg2;
- (void)newLibraryWithSource:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)newLibraryWithSource:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (void)newRenderPipelineStateWithDescriptor:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)newRenderPipelineStateWithDescriptor:(id)arg1 error:(id*)arg2;
- (void)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (id)newSamplerStateWithDescriptor:(id)arg1;
- (id)newTextureLayoutWithDescriptor:(id)arg1 isHeapOrBufferBacked:(bool)arg2;
- (id)newTextureWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 descriptor:(id)arg3 deallocator:(id /* block */)arg4;
- (id)newTextureWithDescriptor:(id)arg1;
- (id)newTextureWithDescriptor:(id)arg1 iosurface:(struct __IOSurface { }*)arg2 plane:(unsigned long long)arg3;
- (struct { unsigned int x1; unsigned int x2; })pipelineCacheStats;
- (id)pipelineStates;
- (id)productName;
- (unsigned long long)recommendedMaxWorkingSetSize;
- (id)samplers;
- (void)setMetalAssertionsEnabled:(bool)arg1;
- (void)setShaderDebugInfoCaching:(bool)arg1;
- (bool)shaderDebugInfoCaching;
- (unsigned long long)sharedMemorySize;
- (unsigned long long)singleFPConfig;
- (bool)supportsFeatureSet:(unsigned long long)arg1;
- (bool)supportsSampleCount:(unsigned long long)arg1;
- (bool)supportsTextureSampleCount:(unsigned long long)arg1;
- (id)textureLayouts;
- (id)textures;
- (void)unloadShaderCaches;
- (void)unmapShaderSampleBuffer;
- (id)unwrapMTLComputePipelineDescriptor:(id)arg1;
- (id)unwrapMTLRenderPipelineDescriptor:(id)arg1;
- (id)vendorName;

@end
