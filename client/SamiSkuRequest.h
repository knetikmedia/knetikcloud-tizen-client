/*
 * SamiSkuRequest.h
 * 
 * 
 */

#ifndef SamiSkuRequest_H_
#define SamiSkuRequest_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::String;


namespace Swagger {

class SamiSkuRequest: public SamiObject {
public:
    SamiSkuRequest();
    SamiSkuRequest(String* json);
    virtual ~SamiSkuRequest();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiSkuRequest* fromJson(String* obj);

    String* getPSku();
    void setPSku(String* pSku);

private:
    String* pSku;
};

} /* namespace Swagger */

#endif /* SamiSkuRequest_H_ */
