#pragma once

// Copyright 2016 Stellar Development Foundation and contributors. Licensed
// under the Apache License, Version 2.0. See the COPYING file at the root
// of this distribution or at http://www.apache.org/licenses/LICENSE-2.0

#include "xdr/Stellar-transaction.h"

namespace stellar
{

namespace txtest
{

void throwIf(TransactionResult const& result);

class ex_txException
{
};

#define TEST_EXCEPTION(M) \
    class M : public ex_txException \
    { \
    };

TEST_EXCEPTION(ex_UNKNOWN)

TEST_EXCEPTION(ex_txBAD_SEQ)
TEST_EXCEPTION(ex_txNO_ACCOUNT)
TEST_EXCEPTION(ex_txINTERNAL_ERROR)
TEST_EXCEPTION(ex_txINSUFFICIENT_BALANCE)
TEST_EXCEPTION(ex_txBAD_AUTH)

TEST_EXCEPTION(ex_opBAD_AUTH)
TEST_EXCEPTION(ex_opNO_ACCOUNT)
TEST_EXCEPTION(ex_opNOT_SUPPORTED)

TEST_EXCEPTION(ex_ACCOUNT_MERGE_MALFORMED)
TEST_EXCEPTION(ex_ACCOUNT_MERGE_NO_ACCOUNT)
TEST_EXCEPTION(ex_ACCOUNT_MERGE_IMMUTABLE_SET)
TEST_EXCEPTION(ex_ACCOUNT_MERGE_HAS_SUB_ENTRIES)
TEST_EXCEPTION(ex_ACCOUNT_MERGE_SEQNUM_TOO_FAR)
TEST_EXCEPTION(ex_ACCOUNT_MERGE_DEST_FULL)
TEST_EXCEPTION(ex_ACCOUNT_MERGE_IS_SPONSOR)

TEST_EXCEPTION(ex_ALLOW_TRUST_MALFORMED)
TEST_EXCEPTION(ex_ALLOW_TRUST_NO_TRUST_LINE)
TEST_EXCEPTION(ex_ALLOW_TRUST_TRUST_NOT_REQUIRED)
TEST_EXCEPTION(ex_ALLOW_TRUST_CANT_REVOKE)
TEST_EXCEPTION(ex_ALLOW_TRUST_SELF_NOT_ALLOWED)

TEST_EXCEPTION(ex_BUMP_SEQUENCE_BAD_SEQ)

TEST_EXCEPTION(ex_CREATE_ACCOUNT_MALFORMED)
TEST_EXCEPTION(ex_CREATE_ACCOUNT_UNDERFUNDED)
TEST_EXCEPTION(ex_CREATE_ACCOUNT_LOW_RESERVE)
TEST_EXCEPTION(ex_CREATE_ACCOUNT_ALREADY_EXIST)

TEST_EXCEPTION(ex_CHANGE_TRUST_MALFORMED)
TEST_EXCEPTION(ex_CHANGE_TRUST_NO_ISSUER)
TEST_EXCEPTION(ex_CHANGE_TRUST_INVALID_LIMIT)
TEST_EXCEPTION(ex_CHANGE_TRUST_LOW_RESERVE)
TEST_EXCEPTION(ex_CHANGE_TRUST_SELF_NOT_ALLOWED)
TEST_EXCEPTION(ex_CHANGE_TRUST_TRUST_LINE_MISSING)
TEST_EXCEPTION(ex_CHANGE_TRUST_CANNOT_DELETE)
TEST_EXCEPTION(ex_CHANGE_TRUST_NOT_AUTH_MAINTAIN_LIABILITIES)

TEST_EXCEPTION(ex_MANAGE_DATA_NOT_SUPPORTED_YET)
TEST_EXCEPTION(ex_MANAGE_DATA_NAME_NOT_FOUND)
TEST_EXCEPTION(ex_MANAGE_DATA_LOW_RESERVE)
TEST_EXCEPTION(ex_MANAGE_DATA_INVALID_NAME)

TEST_EXCEPTION(ex_MANAGE_SELL_OFFER_MALFORMED)
TEST_EXCEPTION(ex_MANAGE_SELL_OFFER_SELL_NO_TRUST)
TEST_EXCEPTION(ex_MANAGE_SELL_OFFER_BUY_NO_TRUST)
TEST_EXCEPTION(ex_MANAGE_SELL_OFFER_SELL_NOT_AUTHORIZED)
TEST_EXCEPTION(ex_MANAGE_SELL_OFFER_BUY_NOT_AUTHORIZED)
TEST_EXCEPTION(ex_MANAGE_SELL_OFFER_LINE_FULL)
TEST_EXCEPTION(ex_MANAGE_SELL_OFFER_UNDERFUNDED)
TEST_EXCEPTION(ex_MANAGE_SELL_OFFER_CROSS_SELF)
TEST_EXCEPTION(ex_MANAGE_SELL_OFFER_SELL_NO_ISSUER)
TEST_EXCEPTION(ex_MANAGE_SELL_OFFER_BUY_NO_ISSUER)
TEST_EXCEPTION(ex_MANAGE_SELL_OFFER_NOT_FOUND)
TEST_EXCEPTION(ex_MANAGE_SELL_OFFER_LOW_RESERVE)

TEST_EXCEPTION(ex_MANAGE_BUY_OFFER_MALFORMED)
TEST_EXCEPTION(ex_MANAGE_BUY_OFFER_SELL_NO_TRUST)
TEST_EXCEPTION(ex_MANAGE_BUY_OFFER_BUY_NO_TRUST)
TEST_EXCEPTION(ex_MANAGE_BUY_OFFER_SELL_NOT_AUTHORIZED)
TEST_EXCEPTION(ex_MANAGE_BUY_OFFER_BUY_NOT_AUTHORIZED)
TEST_EXCEPTION(ex_MANAGE_BUY_OFFER_LINE_FULL)
TEST_EXCEPTION(ex_MANAGE_BUY_OFFER_UNDERFUNDED)
TEST_EXCEPTION(ex_MANAGE_BUY_OFFER_CROSS_SELF)
TEST_EXCEPTION(ex_MANAGE_BUY_OFFER_SELL_NO_ISSUER)
TEST_EXCEPTION(ex_MANAGE_BUY_OFFER_BUY_NO_ISSUER)
TEST_EXCEPTION(ex_MANAGE_BUY_OFFER_NOT_FOUND)
TEST_EXCEPTION(ex_MANAGE_BUY_OFFER_LOW_RESERVE)

TEST_EXCEPTION(ex_PATH_PAYMENT_STRICT_RECEIVE_SUCCESS)
TEST_EXCEPTION(ex_PATH_PAYMENT_STRICT_RECEIVE_MALFORMED)
TEST_EXCEPTION(ex_PATH_PAYMENT_STRICT_RECEIVE_UNDERFUNDED)
TEST_EXCEPTION(ex_PATH_PAYMENT_STRICT_RECEIVE_SRC_NO_TRUST)
TEST_EXCEPTION(ex_PATH_PAYMENT_STRICT_RECEIVE_SRC_NOT_AUTHORIZED)
TEST_EXCEPTION(ex_PATH_PAYMENT_STRICT_RECEIVE_NO_DESTINATION)
TEST_EXCEPTION(ex_PATH_PAYMENT_STRICT_RECEIVE_NO_TRUST)
TEST_EXCEPTION(ex_PATH_PAYMENT_STRICT_RECEIVE_NOT_AUTHORIZED)
TEST_EXCEPTION(ex_PATH_PAYMENT_STRICT_RECEIVE_LINE_FULL)
TEST_EXCEPTION(ex_PATH_PAYMENT_STRICT_RECEIVE_NO_ISSUER)
TEST_EXCEPTION(ex_PATH_PAYMENT_STRICT_RECEIVE_TOO_FEW_OFFERS)
TEST_EXCEPTION(ex_PATH_PAYMENT_STRICT_RECEIVE_OFFER_CROSS_SELF)
TEST_EXCEPTION(ex_PATH_PAYMENT_STRICT_RECEIVE_OVER_SENDMAX)

TEST_EXCEPTION(ex_PATH_PAYMENT_STRICT_SEND_SUCCESS)
TEST_EXCEPTION(ex_PATH_PAYMENT_STRICT_SEND_MALFORMED)
TEST_EXCEPTION(ex_PATH_PAYMENT_STRICT_SEND_UNDERFUNDED)
TEST_EXCEPTION(ex_PATH_PAYMENT_STRICT_SEND_SRC_NO_TRUST)
TEST_EXCEPTION(ex_PATH_PAYMENT_STRICT_SEND_SRC_NOT_AUTHORIZED)
TEST_EXCEPTION(ex_PATH_PAYMENT_STRICT_SEND_NO_DESTINATION)
TEST_EXCEPTION(ex_PATH_PAYMENT_STRICT_SEND_NO_TRUST)
TEST_EXCEPTION(ex_PATH_PAYMENT_STRICT_SEND_NOT_AUTHORIZED)
TEST_EXCEPTION(ex_PATH_PAYMENT_STRICT_SEND_LINE_FULL)
TEST_EXCEPTION(ex_PATH_PAYMENT_STRICT_SEND_NO_ISSUER)
TEST_EXCEPTION(ex_PATH_PAYMENT_STRICT_SEND_TOO_FEW_OFFERS)
TEST_EXCEPTION(ex_PATH_PAYMENT_STRICT_SEND_OFFER_CROSS_SELF)
TEST_EXCEPTION(ex_PATH_PAYMENT_STRICT_SEND_UNDER_DESTMIN)

TEST_EXCEPTION(ex_PAYMENT_MALFORMED)
TEST_EXCEPTION(ex_PAYMENT_UNDERFUNDED)
TEST_EXCEPTION(ex_PAYMENT_SRC_NO_TRUST)
TEST_EXCEPTION(ex_PAYMENT_SRC_NOT_AUTHORIZED)
TEST_EXCEPTION(ex_PAYMENT_NO_DESTINATION)
TEST_EXCEPTION(ex_PAYMENT_NO_TRUST)
TEST_EXCEPTION(ex_PAYMENT_NOT_AUTHORIZED)
TEST_EXCEPTION(ex_PAYMENT_LINE_FULL)
TEST_EXCEPTION(ex_PAYMENT_NO_ISSUER)

TEST_EXCEPTION(ex_SET_OPTIONS_LOW_RESERVE)
TEST_EXCEPTION(ex_SET_OPTIONS_TOO_MANY_SIGNERS)
TEST_EXCEPTION(ex_SET_OPTIONS_BAD_FLAGS)
TEST_EXCEPTION(ex_SET_OPTIONS_INVALID_INFLATION)
TEST_EXCEPTION(ex_SET_OPTIONS_CANT_CHANGE)
TEST_EXCEPTION(ex_SET_OPTIONS_UNKNOWN_FLAG)
TEST_EXCEPTION(ex_SET_OPTIONS_THRESHOLD_OUT_OF_RANGE)
TEST_EXCEPTION(ex_SET_OPTIONS_BAD_SIGNER)
TEST_EXCEPTION(ex_SET_OPTIONS_INVALID_HOME_DOMAIN)
TEST_EXCEPTION(ex_SET_OPTIONS_AUTH_REVOCABLE_REQUIRED)

TEST_EXCEPTION(ex_INFLATION_NOT_TIME)

TEST_EXCEPTION(ex_CREATE_CLAIMABLE_BALANCE_SUCCESS)
TEST_EXCEPTION(ex_CREATE_CLAIMABLE_BALANCE_MALFORMED)
TEST_EXCEPTION(ex_CREATE_CLAIMABLE_BALANCE_LOW_RESERVE)
TEST_EXCEPTION(ex_CREATE_CLAIMABLE_BALANCE_NO_TRUST)
TEST_EXCEPTION(ex_CREATE_CLAIMABLE_BALANCE_NOT_AUTHORIZED)
TEST_EXCEPTION(ex_CREATE_CLAIMABLE_BALANCE_UNDERFUNDED)

TEST_EXCEPTION(ex_CLAIM_CLAIMABLE_BALANCE_SUCCESS)
TEST_EXCEPTION(ex_CLAIM_CLAIMABLE_BALANCE_DOES_NOT_EXIST)
TEST_EXCEPTION(ex_CLAIM_CLAIMABLE_BALANCE_CANNOT_CLAIM)
TEST_EXCEPTION(ex_CLAIM_CLAIMABLE_BALANCE_LINE_FULL)
TEST_EXCEPTION(ex_CLAIM_CLAIMABLE_BALANCE_NOT_AUTHORIZED)
TEST_EXCEPTION(ex_CLAIM_CLAIMABLE_BALANCE_NO_TRUST)

TEST_EXCEPTION(ex_CLAWBACK_MALFORMED)
TEST_EXCEPTION(ex_CLAWBACK_NO_TRUST)
TEST_EXCEPTION(ex_CLAWBACK_NOT_CLAWBACK_ENABLED)
TEST_EXCEPTION(ex_CLAWBACK_UNDERFUNDED)

TEST_EXCEPTION(ex_CLAWBACK_CLAIMABLE_BALANCE_DOES_NOT_EXIST)
TEST_EXCEPTION(ex_CLAWBACK_CLAIMABLE_BALANCE_NOT_ISSUER)
TEST_EXCEPTION(ex_CLAWBACK_CLAIMABLE_BALANCE_NOT_CLAWBACK_ENABLED)

TEST_EXCEPTION(ex_SET_TRUST_LINE_FLAGS_MALFORMED)
TEST_EXCEPTION(ex_SET_TRUST_LINE_FLAGS_NO_TRUST_LINE)
TEST_EXCEPTION(ex_SET_TRUST_LINE_FLAGS_CANT_REVOKE)
TEST_EXCEPTION(ex_SET_TRUST_LINE_FLAGS_INVALID_STATE)

TEST_EXCEPTION(ex_LIQUIDITY_POOL_DEPOSIT_MALFORMED)
TEST_EXCEPTION(ex_LIQUIDITY_POOL_DEPOSIT_NO_TRUST)
TEST_EXCEPTION(ex_LIQUIDITY_POOL_DEPOSIT_NOT_AUTHORIZED)
TEST_EXCEPTION(ex_LIQUIDITY_POOL_DEPOSIT_UNDERFUNDED)
TEST_EXCEPTION(ex_LIQUIDITY_POOL_DEPOSIT_LINE_FULL)
TEST_EXCEPTION(ex_LIQUIDITY_POOL_DEPOSIT_BAD_PRICE)
TEST_EXCEPTION(ex_LIQUIDITY_POOL_DEPOSIT_POOL_FULL)
}
}
