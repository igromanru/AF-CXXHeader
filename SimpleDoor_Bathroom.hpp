#ifndef UE4SS_SDK_SimpleDoor_Bathroom_HPP
#define UE4SS_SDK_SimpleDoor_Bathroom_HPP

class ASimpleDoor_Bathroom_C : public ASimpleDoor_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0530 (size: 0x8)

    void SetupDoorVisuals();
    void ExecuteUbergraph_SimpleDoor_Bathroom(int32 EntryPoint);
}; // Size: 0x538

#endif
