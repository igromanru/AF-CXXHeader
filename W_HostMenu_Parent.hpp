#ifndef UE4SS_SDK_W_HostMenu_Parent_HPP
#define UE4SS_SDK_W_HostMenu_Parent_HPP

class UW_HostMenu_Parent_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)

    void OnFailure_B16B1FFF43617066C2708FBAD56831CD();
    void OnSuccess_B16B1FFF43617066C2708FBAD56831CD();
    void OnFailure_6D1B1F1F4DC7DF4C898AA88B28A650AD();
    void OnSuccess_6D1B1F1F4DC7DF4C898AA88B28A650AD();
    void OnFailure_3340291E4E2588301E7AC19EBC772FA9();
    void OnSuccess_3340291E4E2588301E7AC19EBC772FA9();
    void HostSingleplayerGame(FName MapToHost);
    void HostMultiplayerGame(int32 PlayerCount, bool bUseLAN, FName MapToHost);
    void OnHostFail();
    void OnHostSuccess();
    void ExecuteUbergraph_W_HostMenu_Parent(int32 EntryPoint);
}; // Size: 0x2E8

#endif
