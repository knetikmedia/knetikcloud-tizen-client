/*
 * SamiCartShippingOption.h
 * 
 * 
 */

#ifndef SamiCartShippingOption_H_
#define SamiCartShippingOption_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Boolean;
using Tizen::Base::Double;
using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiCartShippingOption: public SamiObject {
public:
    SamiCartShippingOption();
    SamiCartShippingOption(String* json);
    virtual ~SamiCartShippingOption();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiCartShippingOption* fromJson(String* obj);

    String* getPCurrencyCode();
    void setPCurrencyCode(String* pCurrency_code);
    String* getPDescription();
    void setPDescription(String* pDescription);
    String* getPName();
    void setPName(String* pName);
    Double* getPOriginalPrice();
    void setPOriginalPrice(Double* pOriginal_price);
    Double* getPPrice();
    void setPPrice(Double* pPrice);
    Integer* getPShippingItemId();
    void setPShippingItemId(Integer* pShipping_item_id);
    String* getPSku();
    void setPSku(String* pSku);
    Boolean* getPTaxable();
    void setPTaxable(Boolean* pTaxable);
    Integer* getPVendorId();
    void setPVendorId(Integer* pVendor_id);
    String* getPVendorName();
    void setPVendorName(String* pVendor_name);

private:
    String* pCurrency_code;
String* pDescription;
String* pName;
Double* pOriginal_price;
Double* pPrice;
Integer* pShipping_item_id;
String* pSku;
Boolean* pTaxable;
Integer* pVendor_id;
String* pVendor_name;
};

} /* namespace Swagger */

#endif /* SamiCartShippingOption_H_ */
