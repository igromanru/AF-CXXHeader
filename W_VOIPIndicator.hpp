#ifndef UE4SS_SDK_W_VOIPIndicator_HPP
#define UE4SS_SDK_W_VOIPIndicator_HPP

class UW_VOIPIndicator_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* Image_19;                                                           // 0x02E8 (size: 0x8)

    void Construct();
    void MicrophoneDataReceived(const TArray<uint8>& Data);
    void ExecuteUbergraph_W_VOIPIndicator(int32 EntryPoint);
}; // Size: 0x2F0

#endif
