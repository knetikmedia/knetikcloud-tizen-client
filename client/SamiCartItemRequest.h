/*
 * SamiCartItemRequest.h
 * 
 * 
 */

#ifndef SamiCartItemRequest_H_
#define SamiCartItemRequest_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiCartItemRequest: public SamiObject {
public:
    SamiCartItemRequest();
    SamiCartItemRequest(String* json);
    virtual ~SamiCartItemRequest();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiCartItemRequest* fromJson(String* obj);

    String* getPAffiliateKey();
    void setPAffiliateKey(String* pAffiliate_key);
    String* getPCatalogSku();
    void setPCatalogSku(String* pCatalog_sku);
    Integer* getPQuantity();
    void setPQuantity(Integer* pQuantity);

private:
    String* pAffiliate_key;
String* pCatalog_sku;
Integer* pQuantity;
};

} /* namespace Swagger */

#endif /* SamiCartItemRequest_H_ */
