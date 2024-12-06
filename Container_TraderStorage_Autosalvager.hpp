#ifndef UE4SS_SDK_Container_TraderStorage_Autosalvager_HPP
#define UE4SS_SDK_Container_TraderStorage_Autosalvager_HPP

class AContainer_TraderStorage_Autosalvager_C : public AContainer_TraderStorage_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0A38 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_Container_TraderStorage_Autosalvager(int32 EntryPoint);
}; // Size: 0xA40

#endif
