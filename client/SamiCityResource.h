/*
 * SamiCityResource.h
 * 
 * 
 */

#ifndef SamiCityResource_H_
#define SamiCityResource_H_

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

class SamiCityResource: public SamiObject {
public:
    SamiCityResource();
    SamiCityResource(String* json);
    virtual ~SamiCityResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiCityResource* fromJson(String* obj);

    String* getPCountryCodeIso3();
    void setPCountryCodeIso3(String* pCountry_code_iso3);
    Integer* getPId();
    void setPId(Integer* pId);
    String* getPName();
    void setPName(String* pName);
    String* getPStateCode();
    void setPStateCode(String* pState_code);

private:
    String* pCountry_code_iso3;
Integer* pId;
String* pName;
String* pState_code;
};

} /* namespace Swagger */

#endif /* SamiCityResource_H_ */
