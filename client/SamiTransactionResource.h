/*
 * SamiTransactionResource.h
 * 
 * 
 */

#ifndef SamiTransactionResource_H_
#define SamiTransactionResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Boolean;
using Tizen::Base::Double;
using Tizen::Base::Integer;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiTransactionResource: public SamiObject {
public:
    SamiTransactionResource();
    SamiTransactionResource(String* json);
    virtual ~SamiTransactionResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiTransactionResource* fromJson(String* obj);

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
    Double* getPValue();
    void setPValue(Double* pValue);

private:
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
Double* pValue;
};

} /* namespace Swagger */

#endif /* SamiTransactionResource_H_ */
