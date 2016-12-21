/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.2.4 at Wed Jan 01 01:23:54 2014. */

#include "messages.pb.h"

const uint32_t DeleteWallet_wallet_handle_default = 0;
const uint32_t NewWallet_wallet_number_default = 0;
const bool NewWallet_is_hidden_default = false;
const uint32_t LoadWallet_wallet_number_default = 0;
const bool BackupWallet_is_encrypted_default = false;
const uint32_t BackupWallet_device_default = 0;


const pb_field_t Initialize_fields[2] = {
    PB_FIELD2(  1, BYTES   , REQUIRED, STATIC, FIRST, Initialize, session_id, session_id, 0),
    PB_LAST_FIELD
};

const pb_field_t Features_fields[11] = {
    PB_FIELD2(  1, BYTES   , REQUIRED, STATIC, FIRST, Features, echoed_session_id, echoed_session_id, 0),
    PB_FIELD2(  2, STRING  , OPTIONAL, CALLBACK, OTHER, Features, vendor, echoed_session_id, 0),
    PB_FIELD2(  3, UINT32  , OPTIONAL, STATIC, OTHER, Features, major_version, vendor, 0),
    PB_FIELD2(  4, UINT32  , OPTIONAL, STATIC, OTHER, Features, minor_version, major_version, 0),
    PB_FIELD2(  5, STRING  , OPTIONAL, CALLBACK, OTHER, Features, config, minor_version, 0),
    PB_FIELD2(  6, BOOL    , OPTIONAL, STATIC, OTHER, Features, otp, config, 0),
    PB_FIELD2(  7, BOOL    , OPTIONAL, STATIC, OTHER, Features, pin, otp, 0),
    PB_FIELD2(  8, BOOL    , OPTIONAL, STATIC, OTHER, Features, spv, pin, 0),
    PB_FIELD2(  9, ENUM    , REPEATED, STATIC, OTHER, Features, algo, spv, 0),
    PB_FIELD2( 10, BOOL    , OPTIONAL, STATIC, OTHER, Features, debug_link, algo, 0),
    PB_LAST_FIELD
};

const pb_field_t Ping_fields[2] = {
    PB_FIELD2(  1, STRING  , OPTIONAL, STATIC, FIRST, Ping, greeting, greeting, 0),
    PB_LAST_FIELD
};

const pb_field_t PingResponse_fields[3] = {
    PB_FIELD2(  1, STRING  , OPTIONAL, STATIC, FIRST, PingResponse, echoed_greeting, echoed_greeting, 0),
    PB_FIELD2(  2, BYTES   , REQUIRED, STATIC, OTHER, PingResponse, echoed_session_id, echoed_greeting, 0),
    PB_LAST_FIELD
};

const pb_field_t Success_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t Failure_fields[3] = {
    PB_FIELD2(  1, UINT32  , REQUIRED, STATIC, FIRST, Failure, error_code, error_code, 0),
    PB_FIELD2(  2, STRING  , REQUIRED, CALLBACK, OTHER, Failure, error_message, error_code, 0),
    PB_LAST_FIELD
};

const pb_field_t ButtonRequest_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t ButtonAck_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t ButtonCancel_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t PinRequest_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t PinAck_fields[2] = {
    PB_FIELD2(  1, BYTES   , REQUIRED, CALLBACK, FIRST, PinAck, password, password, 0),
    PB_LAST_FIELD
};

const pb_field_t PinCancel_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t OtpRequest_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t OtpAck_fields[2] = {
    PB_FIELD2(  1, STRING  , REQUIRED, STATIC, FIRST, OtpAck, otp, otp, 0),
    PB_LAST_FIELD
};

const pb_field_t OtpCancel_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t DeleteWallet_fields[2] = {
    PB_FIELD2(  1, UINT32  , OPTIONAL, STATIC, FIRST, DeleteWallet, wallet_handle, wallet_handle, &DeleteWallet_wallet_handle_default),
    PB_LAST_FIELD
};

const pb_field_t NewWallet_fields[5] = {
    PB_FIELD2(  1, UINT32  , OPTIONAL, STATIC, FIRST, NewWallet, wallet_number, wallet_number, &NewWallet_wallet_number_default),
    PB_FIELD2(  2, BYTES   , OPTIONAL, CALLBACK, OTHER, NewWallet, password, wallet_number, 0),
    PB_FIELD2(  3, BYTES   , OPTIONAL, STATIC, OTHER, NewWallet, wallet_name, password, 0),
    PB_FIELD2(  4, BOOL    , OPTIONAL, STATIC, OTHER, NewWallet, is_hidden, wallet_name, &NewWallet_is_hidden_default),
    PB_LAST_FIELD
};

const pb_field_t NewAddress_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t Address_fields[4] = {
    PB_FIELD2(  1, UINT32  , REQUIRED, STATIC, FIRST, Address, address_handle, address_handle, 0),
    PB_FIELD2(  2, BYTES   , REQUIRED, STATIC, OTHER, Address, public_key, address_handle, 0),
    PB_FIELD2(  3, BYTES   , REQUIRED, STATIC, OTHER, Address, address, public_key, 0),
    PB_LAST_FIELD
};

const pb_field_t GetNumberOfAddresses_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t NumberOfAddresses_fields[2] = {
    PB_FIELD2(  1, UINT32  , REQUIRED, STATIC, FIRST, NumberOfAddresses, number_of_addresses, number_of_addresses, 0),
    PB_LAST_FIELD
};

const pb_field_t GetAddressAndPublicKey_fields[2] = {
    PB_FIELD2(  1, UINT32  , REQUIRED, STATIC, FIRST, GetAddressAndPublicKey, address_handle, address_handle, 0),
    PB_LAST_FIELD
};

const pb_field_t SignTransaction_fields[3] = {
    PB_FIELD2(  1, UINT32  , REQUIRED, STATIC, FIRST, SignTransaction, address_handle, address_handle, 0),
    PB_FIELD2(  2, BYTES   , REQUIRED, CALLBACK, OTHER, SignTransaction, transaction_data, address_handle, 0),
    PB_LAST_FIELD
};

const pb_field_t Signature_fields[2] = {
    PB_FIELD2(  1, BYTES   , REQUIRED, STATIC, FIRST, Signature, signature_data, signature_data, 0),
    PB_LAST_FIELD
};

const pb_field_t LoadWallet_fields[2] = {
    PB_FIELD2(  1, UINT32  , OPTIONAL, STATIC, FIRST, LoadWallet, wallet_number, wallet_number, &LoadWallet_wallet_number_default),
    PB_LAST_FIELD
};

const pb_field_t FormatWalletArea_fields[2] = {
    PB_FIELD2(  1, BYTES   , REQUIRED, STATIC, FIRST, FormatWalletArea, initial_entropy_pool, initial_entropy_pool, 0),
    PB_LAST_FIELD
};

const pb_field_t ChangeEncryptionKey_fields[2] = {
    PB_FIELD2(  1, BYTES   , OPTIONAL, CALLBACK, FIRST, ChangeEncryptionKey, password, password, 0),
    PB_LAST_FIELD
};

const pb_field_t ChangeWalletName_fields[2] = {
    PB_FIELD2(  1, BYTES   , REQUIRED, STATIC, FIRST, ChangeWalletName, wallet_name, wallet_name, 0),
    PB_LAST_FIELD
};

const pb_field_t ListWallets_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t WalletInfo_fields[4] = {
    PB_FIELD2(  1, UINT32  , REQUIRED, STATIC, FIRST, WalletInfo, wallet_number, wallet_number, 0),
    PB_FIELD2(  2, BYTES   , REQUIRED, STATIC, OTHER, WalletInfo, wallet_name, wallet_number, 0),
    PB_FIELD2(  3, BYTES   , REQUIRED, STATIC, OTHER, WalletInfo, wallet_uuid, wallet_name, 0),
    PB_LAST_FIELD
};

const pb_field_t Wallets_fields[2] = {
    PB_FIELD2(  1, MESSAGE , REPEATED, CALLBACK, FIRST, Wallets, wallet_info, wallet_info, &WalletInfo_fields),
    PB_LAST_FIELD
};

const pb_field_t BackupWallet_fields[3] = {
    PB_FIELD2(  1, BOOL    , OPTIONAL, STATIC, FIRST, BackupWallet, is_encrypted, is_encrypted, &BackupWallet_is_encrypted_default),
    PB_FIELD2(  2, UINT32  , OPTIONAL, STATIC, OTHER, BackupWallet, device, is_encrypted, &BackupWallet_device_default),
    PB_LAST_FIELD
};

const pb_field_t RestoreWallet_fields[3] = {
    PB_FIELD2(  1, MESSAGE , REQUIRED, STATIC, FIRST, RestoreWallet, new_wallet, new_wallet, &NewWallet_fields),
    PB_FIELD2(  2, BYTES   , REQUIRED, STATIC, OTHER, RestoreWallet, seed, new_wallet, 0),
    PB_LAST_FIELD
};

const pb_field_t GetDeviceUUID_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t DeviceUUID_fields[2] = {
    PB_FIELD2(  1, BYTES   , REQUIRED, STATIC, FIRST, DeviceUUID, device_uuid, device_uuid, 0),
    PB_LAST_FIELD
};

const pb_field_t GetEntropy_fields[2] = {
    PB_FIELD2(  1, UINT32  , REQUIRED, STATIC, FIRST, GetEntropy, number_of_bytes, number_of_bytes, 0),
    PB_LAST_FIELD
};

const pb_field_t Entropy_fields[2] = {
    PB_FIELD2(  1, BYTES   , REQUIRED, CALLBACK, FIRST, Entropy, entropy, entropy, 0),
    PB_LAST_FIELD
};

const pb_field_t GetMasterPublicKey_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t MasterPublicKey_fields[3] = {
    PB_FIELD2(  1, BYTES   , REQUIRED, STATIC, FIRST, MasterPublicKey, public_key, public_key, 0),
    PB_FIELD2(  2, BYTES   , REQUIRED, STATIC, OTHER, MasterPublicKey, chain_code, public_key, 0),
    PB_LAST_FIELD
};


/* Check that field information fits in pb_field_t */
#if !defined(PB_FIELD_16BIT) && !defined(PB_FIELD_32BIT)
STATIC_ASSERT((pb_membersize(Wallets, wallet_info) < 256 && pb_membersize(RestoreWallet, new_wallet) < 256), YOU_MUST_DEFINE_PB_FIELD_16BIT_FOR_MESSAGES_Initialize_Features_Ping_PingResponse_Success_Failure_ButtonRequest_ButtonAck_ButtonCancel_PinRequest_PinAck_PinCancel_OtpRequest_OtpAck_OtpCancel_DeleteWallet_NewWallet_NewAddress_Address_GetNumberOfAddresses_NumberOfAddresses_GetAddressAndPublicKey_SignTransaction_Signature_LoadWallet_FormatWalletArea_ChangeEncryptionKey_ChangeWalletName_ListWallets_WalletInfo_Wallets_BackupWallet_RestoreWallet_GetDeviceUUID_DeviceUUID_GetEntropy_Entropy_GetMasterPublicKey_MasterPublicKey)
#endif

#if !defined(PB_FIELD_32BIT)
STATIC_ASSERT((pb_membersize(Wallets, wallet_info) < 65536 && pb_membersize(RestoreWallet, new_wallet) < 65536), YOU_MUST_DEFINE_PB_FIELD_32BIT_FOR_MESSAGES_Initialize_Features_Ping_PingResponse_Success_Failure_ButtonRequest_ButtonAck_ButtonCancel_PinRequest_PinAck_PinCancel_OtpRequest_OtpAck_OtpCancel_DeleteWallet_NewWallet_NewAddress_Address_GetNumberOfAddresses_NumberOfAddresses_GetAddressAndPublicKey_SignTransaction_Signature_LoadWallet_FormatWalletArea_ChangeEncryptionKey_ChangeWalletName_ListWallets_WalletInfo_Wallets_BackupWallet_RestoreWallet_GetDeviceUUID_DeviceUUID_GetEntropy_Entropy_GetMasterPublicKey_MasterPublicKey)
#endif

