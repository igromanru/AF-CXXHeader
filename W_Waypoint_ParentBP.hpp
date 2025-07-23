#ifndef UE4SS_SDK_W_Waypoint_ParentBP_HPP
#define UE4SS_SDK_W_Waypoint_ParentBP_HPP

class UW_Waypoint_ParentBP_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* Expand;                                                   // 0x02E8 (size: 0x8)
    class UWidgetAnimation* FadeIn;                                                   // 0x02F0 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x02F8 (size: 0x8)
    class UTextBlock* WaypointText;                                                   // 0x0300 (size: 0x8)
    class UImage* WaypoointIcon;                                                      // 0x0308 (size: 0x8)
    double EdgeBuffer;                                                                // 0x0310 (size: 0x8)
    FVector2D Alignment;                                                              // 0x0318 (size: 0x10)
    bool WaypointExpanded;                                                            // 0x0328 (size: 0x1)
    bool WaypointFaded;                                                               // 0x0329 (size: 0x1)
    FW_Waypoint_ParentBP_COnPositionUpdated OnPositionUpdated;                        // 0x0330 (size: 0x10)
    void OnPositionUpdated();

    void AllowedInVignette(bool& AllowInVignette);
    void GetWaypointLocation(FVector& Location);
    bool ShouldBeVisible();
    void UpdatePosition();
    void OnLoaded_3399A0584E409D1ECD92F48589B13B62(class UObject* Loaded);
    void Construct();
    void ComputeVisibility();
    void UpdateIcon(TSoftObjectPtr<UTexture2D> Texture);
    void ExecuteUbergraph_W_Waypoint_ParentBP(int32 EntryPoint);
    void OnPositionUpdated__DelegateSignature();
}; // Size: 0x340

#endif
