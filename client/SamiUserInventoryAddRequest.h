/*
 * SamiUserInventoryAddRequest.h
 * 
 * 
 */

#ifndef SamiUserInventoryAddRequest_H_
#define SamiUserInventoryAddRequest_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Boolean;
using Tizen::Base::Collection::IList;
using Tizen::Base::String;


namespace Swagger {

class SamiUserInventoryAddRequest: public SamiObject {
public:
    SamiUserInventoryAddRequest();
    SamiUserInventoryAddRequest(String* json);
    virtual ~SamiUserInventoryAddRequest();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiUserInventoryAddRequest* fromJson(String* obj);

    String* getPNote();
    void setPNote(String* pNote);
    IList* getPOverrides();
    void setPOverrides(IList* pOverrides);
    Boolean* getPSkipInvoice();
    void setPSkipInvoice(Boolean* pSkip_invoice);
    String* getPSku();
    void setPSku(String* pSku);

private:
    String* pNote;
IList* pOverrides;
Boolean* pSkip_invoice;
String* pSku;
};

} /* namespace Swagger */

#endif /* SamiUserInventoryAddRequest_H_ */
