#ifndef UE4SS_SDK_W_VoiceChat_Player_HPP
#define UE4SS_SDK_W_VoiceChat_Player_HPP

class UW_VoiceChat_Player_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* Image_18;                                                           // 0x02E8 (size: 0x8)
    class UTextBlock* NameText;                                                       // 0x02F0 (size: 0x8)
    TSoftObjectPtr<APlayerState> PlayerState;                                         // 0x02F8 (size: 0x28)

    void OnFailure_6C205B7F4077DC5B6B28A9A359266550(bool bSuccess, const TArray<FString>& SanitizedMessages);
    void OnSuccess_6C205B7F4077DC5B6B28A9A359266550(bool bSuccess, const TArray<FString>& SanitizedMessages);
    void Construct();
    void MicDataReceived(const TArray<uint8>& Data);
    void ExecuteUbergraph_W_VoiceChat_Player(int32 EntryPoint);
}; // Size: 0x320

#endif
