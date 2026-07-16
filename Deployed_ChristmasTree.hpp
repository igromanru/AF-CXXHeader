#ifndef UE4SS_SDK_Deployed_ChristmasTree_HPP
#define UE4SS_SDK_Deployed_ChristmasTree_HPP

class ADeployed_ChristmasTree_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0870 (size: 0x8)
    class UAudioComponent* TreeMusic;                                                 // 0x0878 (size: 0x8)
    class UStaticMeshComponent* SM_ChristmasTree_Star;                                // 0x0880 (size: 0x8)

    void GetHighlightComponents(TArray<class UActorComponent*>& Components, bool& DontHighlightPowerCord);
    void TogglePowerFX();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_Deployed_ChristmasTree(int32 EntryPoint);
}; // Size: 0x888

#endif
