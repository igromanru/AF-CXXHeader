#ifndef UE4SS_SDK_W_VoiceChat_PlayerList_HPP
#define UE4SS_SDK_W_VoiceChat_PlayerList_HPP

class UW_VoiceChat_PlayerList_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UVerticalBox* PlayerBox;                                                    // 0x02E8 (size: 0x8)
    TMap<class TSoftObjectPtr<APlayerState>, class UW_VoiceChat_Player_C*> WidgetList; // 0x02F0 (size: 0x50)

    void ShouldShowVoiceChatList(bool& bShowList);
    void RemovePlayer(class APlayerState* PlayerState);
    void AddPlayer(class APlayerState* PlayerState);
    void Construct();
    void ExecuteUbergraph_W_VoiceChat_PlayerList(int32 EntryPoint);
}; // Size: 0x340

#endif
