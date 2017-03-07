/*
 * SamiCountryResource.h
 * 
 * 
 */

#ifndef SamiCountryResource_H_
#define SamiCountryResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::String;


namespace Swagger {

class SamiCountryResource: public SamiObject {
public:
    SamiCountryResource();
    SamiCountryResource(String* json);
    virtual ~SamiCountryResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiCountryResource* fromJson(String* obj);

    String* getPIso2();
    void setPIso2(String* pIso2);
    String* getPIso3();
    void setPIso3(String* pIso3);
    String* getPName();
    void setPName(String* pName);

private:
    String* pIso2;
String* pIso3;
String* pName;
};

} /* namespace Swagger */

#endif /* SamiCountryResource_H_ */
