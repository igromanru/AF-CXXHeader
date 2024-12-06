#ifndef UE4SS_SDK_Trigger_ClientTutorialPanel_HPP
#define UE4SS_SDK_Trigger_ClientTutorialPanel_HPP

class ATrigger_ClientTutorialPanel_C : public AAbiotic_TriggerVolume_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0348 (size: 0x8)
    FDataTableRowHandle TutorialPanel;                                                // 0x0350 (size: 0x10)

    void OnTrigger();
    void ExecuteUbergraph_Trigger_ClientTutorialPanel(int32 EntryPoint);
}; // Size: 0x360

#endif
