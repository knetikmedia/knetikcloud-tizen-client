/*
 * SamiStateTaxResource.h
 * 
 * 
 */

#ifndef SamiStateTaxResource_H_
#define SamiStateTaxResource_H_

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

class SamiStateTaxResource: public SamiObject {
public:
    SamiStateTaxResource();
    SamiStateTaxResource(String* json);
    virtual ~SamiStateTaxResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiStateTaxResource* fromJson(String* obj);

    String* getPCountryIso3();
    void setPCountryIso3(String* pCountry_iso3);
    Boolean* getPFederallyExempt();
    void setPFederallyExempt(Boolean* pFederally_exempt);
    String* getPName();
    void setPName(String* pName);
    Double* getPRate();
    void setPRate(Double* pRate);
    String* getPStateCode();
    void setPStateCode(String* pState_code);
    Boolean* getPTaxShipping();
    void setPTaxShipping(Boolean* pTax_shipping);

private:
    String* pCountry_iso3;
Boolean* pFederally_exempt;
String* pName;
Double* pRate;
String* pState_code;
Boolean* pTax_shipping;
};

} /* namespace Swagger */

#endif /* SamiStateTaxResource_H_ */
