/*
 * SamiWalletTransactionResource.h
 * 
 * 
 */

#ifndef SamiWalletTransactionResource_H_
#define SamiWalletTransactionResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiSimpleUserResource.h"
using Tizen::Base::Boolean;
using Tizen::Base::Double;
using Tizen::Base::Integer;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiWalletTransactionResource: public SamiObject {
public:
    SamiWalletTransactionResource();
    SamiWalletTransactionResource(String* json);
    virtual ~SamiWalletTransactionResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiWalletTransactionResource* fromJson(String* obj);

    Double* getPBalance();
    void setPBalance(Double* pBalance);
    Long* getPCreateDate();
    void setPCreateDate(Long* pCreate_date);
    String* getPCurrencyCode();
    void setPCurrencyCode(String* pCurrency_code);
    String* getPDetails();
    void setPDetails(String* pDetails);
    Integer* getPId();
    void setPId(Integer* pId);
    Integer* getPInvoiceId();
    void setPInvoiceId(Integer* pInvoice_id);
    Boolean* getPIsRefunded();
    void setPIsRefunded(Boolean* pIs_refunded);
    String* getPResponse();
    void setPResponse(String* pResponse);
    String* getPSource();
    void setPSource(String* pSource);
    Boolean* getPSuccessful();
    void setPSuccessful(Boolean* pSuccessful);
    String* getPTransactionId();
    void setPTransactionId(String* pTransaction_id);
    String* getPType();
    void setPType(String* pType);
    String* getPTypeHint();
    void setPTypeHint(String* pType_hint);
    SamiSimpleUserResource* getPUser();
    void setPUser(SamiSimpleUserResource* pUser);
    Double* getPValue();
    void setPValue(Double* pValue);
    Integer* getPWalletId();
    void setPWalletId(Integer* pWallet_id);

private:
    Double* pBalance;
Long* pCreate_date;
String* pCurrency_code;
String* pDetails;
Integer* pId;
Integer* pInvoice_id;
Boolean* pIs_refunded;
String* pResponse;
String* pSource;
Boolean* pSuccessful;
String* pTransaction_id;
String* pType;
String* pType_hint;
SamiSimpleUserResource* pUser;
Double* pValue;
Integer* pWallet_id;
};

} /* namespace Swagger */

#endif /* SamiWalletTransactionResource_H_ */
