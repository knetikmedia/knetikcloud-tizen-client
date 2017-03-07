/*
 * SamiInvoiceCreateRequest.h
 * 
 * 
 */

#ifndef SamiInvoiceCreateRequest_H_
#define SamiInvoiceCreateRequest_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::String;


namespace Swagger {

class SamiInvoiceCreateRequest: public SamiObject {
public:
    SamiInvoiceCreateRequest();
    SamiInvoiceCreateRequest(String* json);
    virtual ~SamiInvoiceCreateRequest();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiInvoiceCreateRequest* fromJson(String* obj);

    String* getPCartGuid();
    void setPCartGuid(String* pCart_guid);

private:
    String* pCart_guid;
};

} /* namespace Swagger */

#endif /* SamiInvoiceCreateRequest_H_ */
