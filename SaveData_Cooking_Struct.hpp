#ifndef UE4SS_SDK_SaveData_Cooking_Struct_HPP
#define UE4SS_SDK_SaveData_Cooking_Struct_HPP

struct FSaveData_Cooking_Struct
{
    FSoftObjectPath ActorPath_49_9FEEAC6446E69602638F6FB6A601D5B3;                    // 0x0000 (size: 0x20)
    FDataTableRowHandle OriginalItem_5_9765522C42FCC99E6F5D04BB2E72F5E0;              // 0x0020 (size: 0x10)
    FDataTableRowHandle CookwareItem_7_0CEA84364B6EFA85C1894C8973D19CEC;              // 0x0030 (size: 0x10)
    double TimetoCook_13_957973F1415B52E0EAF193BFCFEF1ED0;                            // 0x0040 (size: 0x8)
    TEnumAsByte<EFoodCookStates::Type> ChefSkill_16_144E32114C985C4CCB310C8130680453; // 0x0048 (size: 0x1)
    double TimetoBurn_19_56E61B3D4CD7E80A3468F7B36710A67B;                            // 0x0050 (size: 0x8)
    double TimetoIgnite_21_E1D2B6EA42120839F22F679D838B0EDC;                          // 0x0058 (size: 0x8)
    bool ShowPanMesh_24_555B9EA344D3843851B621999A8B46A3;                             // 0x0060 (size: 0x1)
    FString ChefID_30_B6FE3723499B8BD398B599803507C8EB;                               // 0x0068 (size: 0x10)
    bool Cookware_33_F0F914814DCB16F2C065D59972EC2242;                                // 0x0078 (size: 0x1)
    FGuid CookingDelayGUID_36_032270FC4B3BB25FF024D2A7EE2A29CD;                       // 0x007C (size: 0x10)
    bool CanCookSoup_39_063D45094EF66504F3CE228577A66547;                             // 0x008C (size: 0x1)
    bool StartCookingSoup_41_86C766F8442EE0F41118538989D1C2AF;                        // 0x008D (size: 0x1)
    bool NewIngredientAdded_43_B99A589D4E919808FCA92EB366AD138F;                      // 0x008E (size: 0x1)
    TEnumAsByte<EFoodCookStates::Type> CookingState_46_701EFDFB495A0564E040B197FC34F801; // 0x008F (size: 0x1)

}; // Size: 0x90

#endif
