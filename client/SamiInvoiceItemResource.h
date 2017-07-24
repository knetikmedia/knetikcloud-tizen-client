/*
 * SamiInvoiceItemResource.h
 * 
 * 
 */

#ifndef SamiInvoiceItemResource_H_
#define SamiInvoiceItemResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Double;
using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiInvoiceItemResource: public SamiObject {
public:
    SamiInvoiceItemResource();
    SamiInvoiceItemResource(String* json);
    virtual ~SamiInvoiceItemResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiInvoiceItemResource* fromJson(String* obj);

    String* getPBundleSku();
    void setPBundleSku(String* pBundle_sku);
    String* getPCurrentFulfillmentStatus();
    void setPCurrentFulfillmentStatus(String* pCurrent_fulfillment_status);
    Integer* getPId();
    void setPId(Integer* pId);
    Integer* getPInvoiceId();
    void setPInvoiceId(Integer* pInvoice_id);
    Integer* getPItemId();
    void setPItemId(Integer* pItem_id);
    String* getPItemName();
    void setPItemName(String* pItem_name);
    Double* getPOriginalTotalPrice();
    void setPOriginalTotalPrice(Double* pOriginal_total_price);
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
    Double* getPSystemPrice();
    void setPSystemPrice(Double* pSystem_price);
    Double* getPTotalPrice();
    void setPTotalPrice(Double* pTotal_price);
    String* getPTypeHint();
    void setPTypeHint(String* pType_hint);
    Double* getPUnitPrice();
    void setPUnitPrice(Double* pUnit_price);

private:
    String* pBundle_sku;
String* pCurrent_fulfillment_status;
Integer* pId;
Integer* pInvoice_id;
Integer* pItem_id;
String* pItem_name;
Double* pOriginal_total_price;
Double* pOriginal_unit_price;
Integer* pQty;
String* pSale_name;
String* pSku;
String* pSku_description;
Double* pSystem_price;
Double* pTotal_price;
String* pType_hint;
Double* pUnit_price;
};

} /* namespace Swagger */

#endif /* SamiInvoiceItemResource_H_ */
