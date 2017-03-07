/*
 * SamiCatalogSale.h
 * 
 * 
 */

#ifndef SamiCatalogSale_H_
#define SamiCatalogSale_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Double;
using Tizen::Base::Integer;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiCatalogSale: public SamiObject {
public:
    SamiCatalogSale();
    SamiCatalogSale(String* json);
    virtual ~SamiCatalogSale();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiCatalogSale* fromJson(String* obj);

    String* getPCurrencyCode();
    void setPCurrencyCode(String* pCurrency_code);
    String* getPDiscountType();
    void setPDiscountType(String* pDiscount_type);
    Double* getPDiscountValue();
    void setPDiscountValue(Double* pDiscount_value);
    Integer* getPId();
    void setPId(Integer* pId);
    Integer* getPItem();
    void setPItem(Integer* pItem);
    String* getPLongDescription();
    void setPLongDescription(String* pLong_description);
    String* getPName();
    void setPName(String* pName);
    Long* getPSaleEndDate();
    void setPSaleEndDate(Long* pSale_end_date);
    Long* getPSaleStartDate();
    void setPSaleStartDate(Long* pSale_start_date);
    String* getPShortDescription();
    void setPShortDescription(String* pShort_description);
    String* getPTag();
    void setPTag(String* pTag);
    Integer* getPVendor();
    void setPVendor(Integer* pVendor);

private:
    String* pCurrency_code;
String* pDiscount_type;
Double* pDiscount_value;
Integer* pId;
Integer* pItem;
String* pLong_description;
String* pName;
Long* pSale_end_date;
Long* pSale_start_date;
String* pShort_description;
String* pTag;
Integer* pVendor;
};

} /* namespace Swagger */

#endif /* SamiCatalogSale_H_ */
