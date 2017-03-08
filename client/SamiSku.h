/*
 * SamiSku.h
 * 
 * 
 */

#ifndef SamiSku_H_
#define SamiSku_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiProperty.h"
using Tizen::Base::Boolean;
using Tizen::Base::Collection::HashMap;
using Tizen::Base::Collection::IList;
using Tizen::Base::Double;
using Tizen::Base::Integer;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiSku: public SamiObject {
public:
    SamiSku();
    SamiSku(String* json);
    virtual ~SamiSku();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiSku* fromJson(String* obj);

    HashMap* getPAdditionalProperties();
    void setPAdditionalProperties(HashMap* pAdditional_properties);
    String* getPCurrencyCode();
    void setPCurrencyCode(String* pCurrency_code);
    String* getPDescription();
    void setPDescription(String* pDescription);
    Integer* getPInventory();
    void setPInventory(Integer* pInventory);
    Integer* getPMinInventoryThreshold();
    void setPMinInventoryThreshold(Integer* pMin_inventory_threshold);
    Double* getPOriginalPrice();
    void setPOriginalPrice(Double* pOriginal_price);
    Double* getPPrice();
    void setPPrice(Double* pPrice);
    Boolean* getPPublished();
    void setPPublished(Boolean* pPublished);
    Integer* getPSaleId();
    void setPSaleId(Integer* pSale_id);
    String* getPSaleName();
    void setPSaleName(String* pSale_name);
    String* getPSku();
    void setPSku(String* pSku);
    Long* getPStartDate();
    void setPStartDate(Long* pStart_date);
    Long* getPStopDate();
    void setPStopDate(Long* pStop_date);

private:
    HashMap* pAdditional_properties;
String* pCurrency_code;
String* pDescription;
Integer* pInventory;
Integer* pMin_inventory_threshold;
Double* pOriginal_price;
Double* pPrice;
Boolean* pPublished;
Integer* pSale_id;
String* pSale_name;
String* pSku;
Long* pStart_date;
Long* pStop_date;
};

} /* namespace Swagger */

#endif /* SamiSku_H_ */
