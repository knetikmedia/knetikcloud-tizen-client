/*
 * SamiWalletAlterRequest.h
 * 
 * 
 */

#ifndef SamiWalletAlterRequest_H_
#define SamiWalletAlterRequest_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Double;
using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiWalletAlterRequest: public SamiObject {
public:
    SamiWalletAlterRequest();
    SamiWalletAlterRequest(String* json);
    virtual ~SamiWalletAlterRequest();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiWalletAlterRequest* fromJson(String* obj);

    Double* getPDelta();
    void setPDelta(Double* pDelta);
    Integer* getPInvoiceId();
    void setPInvoiceId(Integer* pInvoice_id);
    String* getPReason();
    void setPReason(String* pReason);
    String* getPType();
    void setPType(String* pType);

private:
    Double* pDelta;
Integer* pInvoice_id;
String* pReason;
String* pType;
};

} /* namespace Swagger */

#endif /* SamiWalletAlterRequest_H_ */
