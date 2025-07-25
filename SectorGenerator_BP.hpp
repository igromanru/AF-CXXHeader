#ifndef UE4SS_SDK_SectorGenerator_BP_HPP
#define UE4SS_SDK_SectorGenerator_BP_HPP

class ASectorGenerator_BP_C : public AGenerator_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02F0 (size: 0x8)
    class UTextRenderComponent* TextRender;                                           // 0x02F8 (size: 0x8)
    class ADayNightManager_C* DayNightManager;                                        // 0x0300 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void PowerOn();
    void PowerOff();
    void ExecuteUbergraph_SectorGenerator_BP(int32 EntryPoint);
}; // Size: 0x308

#endif
