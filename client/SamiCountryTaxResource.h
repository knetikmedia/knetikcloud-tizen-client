/*
 * SamiCountryTaxResource.h
 * 
 * 
 */

#ifndef SamiCountryTaxResource_H_
#define SamiCountryTaxResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Boolean;
using Tizen::Base::Double;
using Tizen::Base::String;


namespace Swagger {

class SamiCountryTaxResource: public SamiObject {
public:
    SamiCountryTaxResource();
    SamiCountryTaxResource(String* json);
    virtual ~SamiCountryTaxResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiCountryTaxResource* fromJson(String* obj);

    String* getPCountryIso3();
    void setPCountryIso3(String* pCountry_iso3);
    String* getPName();
    void setPName(String* pName);
    Double* getPRate();
    void setPRate(Double* pRate);
    Boolean* getPTaxShipping();
    void setPTaxShipping(Boolean* pTax_shipping);

private:
    String* pCountry_iso3;
String* pName;
Double* pRate;
Boolean* pTax_shipping;
};

} /* namespace Swagger */

#endif /* SamiCountryTaxResource_H_ */
