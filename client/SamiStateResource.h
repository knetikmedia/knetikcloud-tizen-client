/*
 * SamiStateResource.h
 * 
 * 
 */

#ifndef SamiStateResource_H_
#define SamiStateResource_H_

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

class SamiStateResource: public SamiObject {
public:
    SamiStateResource();
    SamiStateResource(String* json);
    virtual ~SamiStateResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiStateResource* fromJson(String* obj);

    String* getPCode();
    void setPCode(String* pCode);
    String* getPCountryCodeIso3();
    void setPCountryCodeIso3(String* pCountry_code_iso3);
    Integer* getPId();
    void setPId(Integer* pId);
    String* getPName();
    void setPName(String* pName);

private:
    String* pCode;
String* pCountry_code_iso3;
Integer* pId;
String* pName;
};

} /* namespace Swagger */

#endif /* SamiStateResource_H_ */
