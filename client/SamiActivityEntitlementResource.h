/*
 * SamiActivityEntitlementResource.h
 * 
 * 
 */

#ifndef SamiActivityEntitlementResource_H_
#define SamiActivityEntitlementResource_H_

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

class SamiActivityEntitlementResource: public SamiObject {
public:
    SamiActivityEntitlementResource();
    SamiActivityEntitlementResource(String* json);
    virtual ~SamiActivityEntitlementResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiActivityEntitlementResource* fromJson(String* obj);

    String* getPCurrencyCode();
    void setPCurrencyCode(String* pCurrency_code);
    Integer* getPItemId();
    void setPItemId(Integer* pItem_id);
    String* getPName();
    void setPName(String* pName);
    Double* getPPrice();
    void setPPrice(Double* pPrice);
    String* getPSku();
    void setPSku(String* pSku);

private:
    String* pCurrency_code;
Integer* pItem_id;
String* pName;
Double* pPrice;
String* pSku;
};

} /* namespace Swagger */

#endif /* SamiActivityEntitlementResource_H_ */
