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

    void GetWaypointLocation(FVector& Location);
    bool ShouldBeVisible();
    void UpdatePosition();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void ComputeVisibility();
    void ExecuteUbergraph_W_Waypoint_ParentBP(int32 EntryPoint);
}; // Size: 0x32A

#endif
