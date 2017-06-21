/*
 * SamiCartLineItem.h
 * 
 * 
 */

#ifndef SamiCartLineItem_H_
#define SamiCartLineItem_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiDiscount.h"
using Tizen::Base::Collection::IList;
using Tizen::Base::Double;
using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiCartLineItem: public SamiObject {
public:
    SamiCartLineItem();
    SamiCartLineItem(String* json);
    virtual ~SamiCartLineItem();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiCartLineItem* fromJson(String* obj);

    String* getPCurrencyCode();
    void setPCurrencyCode(String* pCurrency_code);
    String* getPDescription();
    void setPDescription(String* pDescription);
    SamiDiscount* getPDiscount();
    void setPDiscount(SamiDiscount* pDiscount);
    Double* getPLineTotal();
    void setPLineTotal(Double* pLine_total);
    String* getPName();
    void setPName(String* pName);
    Double* getPOriginalLineTotal();
    void setPOriginalLineTotal(Double* pOriginal_line_total);
    Double* getPOriginalUnitPrice();
    void setPOriginalUnitPrice(Double* pOriginal_unit_price);
    Integer* getPQty();
    void setPQty(Integer* pQty);
    String* getPSaleName();
    void setPSaleName(String* pSale_name);
    String* getPSku();
    void setPSku(String* pSku);
    String* getPSkuDescription();
    void setPSkuDescription(String* pSku_description);
    Integer* getPStoreItemId();
    void setPStoreItemId(Integer* pStore_item_id);
    IList* getPTags();
    void setPTags(IList* pTags);
    String* getPThumbUrl();
    void setPThumbUrl(String* pThumb_url);
    String* getPUniqueKey();
    void setPUniqueKey(String* pUnique_key);
    Double* getPUnitPrice();
    void setPUnitPrice(Double* pUnit_price);
    Integer* getPVendorId();
    void setPVendorId(Integer* pVendor_id);
    String* getPVendorName();
    void setPVendorName(String* pVendor_name);

private:
    String* pCurrency_code;
String* pDescription;
SamiDiscount* pDiscount;
Double* pLine_total;
String* pName;
Double* pOriginal_line_total;
Double* pOriginal_unit_price;
Integer* pQty;
String* pSale_name;
String* pSku;
String* pSku_description;
Integer* pStore_item_id;
IList* pTags;
String* pThumb_url;
String* pUnique_key;
Double* pUnit_price;
Integer* pVendor_id;
String* pVendor_name;
};

} /* namespace Swagger */

#endif /* SamiCartLineItem_H_ */
