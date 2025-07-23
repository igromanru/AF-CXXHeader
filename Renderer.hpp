#ifndef UE4SS_SDK_Renderer_HPP
#define UE4SS_SDK_Renderer_HPP

#include "Renderer_enums.hpp"

class ASparseVolumeTextureViewer : public AInfo
{
    class USparseVolumeTextureViewerComponent* SparseVolumeTextureViewerComponent;    // 0x0298 (size: 0x8)

}; // Size: 0x2A0

class USparseVolumeTextureViewerComponent : public UPrimitiveComponent
{
    class USparseVolumeTexture* SparseVolumeTexturePreview;                           // 0x0520 (size: 0x8)
    float Frame;                                                                      // 0x0528 (size: 0x4)
    float FrameRate;                                                                  // 0x052C (size: 0x4)
    uint8 bPlaying;                                                                   // 0x0530 (size: 0x1)
    uint8 bLooping;                                                                   // 0x0530 (size: 0x1)
    uint8 bReversePlayback;                                                           // 0x0530 (size: 0x1)
    uint8 bBlockingStreamingRequests;                                                 // 0x0530 (size: 0x1)
    uint8 bApplyPerFrameTransforms;                                                   // 0x0530 (size: 0x1)
    uint8 bPivotAtCentroid;                                                           // 0x0530 (size: 0x1)
    float VoxelSize;                                                                  // 0x0534 (size: 0x4)
    TEnumAsByte<ESparseVolumeTexturePreviewAttribute> PreviewAttribute;               // 0x0538 (size: 0x1)
    int32 MipLevel;                                                                   // 0x053C (size: 0x4)
    float Extinction;                                                                 // 0x0540 (size: 0x4)

}; // Size: 0x560

#endif
