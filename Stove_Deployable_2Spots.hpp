#ifndef UE4SS_SDK_Stove_Deployable_2Spots_HPP
#define UE4SS_SDK_Stove_Deployable_2Spots_HPP

class AStove_Deployable_2Spots_C : public AStove_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0970 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0978 (size: 0x8)
    class UStaticMeshComponent* Lid1;                                                 // 0x0980 (size: 0x8)
    class UStaticMeshComponent* CookSpot2;                                            // 0x0988 (size: 0x8)
    float OpenLidTimeline_Alpha_D45F09F247A13BAAD1144D9C33ADC409;                     // 0x0990 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> OpenLidTimeline__Direction_D45F09F247A13BAAD1144D9C33ADC409; // 0x0994 (size: 0x1)
    class UTimelineComponent* OpenLidTimeline;                                        // 0x0998 (size: 0x8)

    void PlugCordAttachLocation(FVector& RelativeLocation);
    void OpenLidTimeline__FinishedFunc();
    void OpenLidTimeline__UpdateFunc();
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void ReceiveBeginPlay();
    void TogglePowerFX();
    void ExecuteUbergraph_Stove_Deployable_2Spots(int32 EntryPoint);
}; // Size: 0x9A0

#endif
