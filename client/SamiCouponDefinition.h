/*
 * SamiCouponDefinition.h
 * 
 * 
 */

#ifndef SamiCouponDefinition_H_
#define SamiCouponDefinition_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Boolean;
using Tizen::Base::Collection::IList;
using Tizen::Base::Double;
using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiCouponDefinition: public SamiObject {
public:
    SamiCouponDefinition();
    SamiCouponDefinition(String* json);
    virtual ~SamiCouponDefinition();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiCouponDefinition* fromJson(String* obj);

    String* getPCode();
    void setPCode(String* pCode);
    String* getPDescription();
    void setPDescription(String* pDescription);
    String* getPDiscountType();
    void setPDiscountType(String* pDiscount_type);
    Boolean* getPExclusive();
    void setPExclusive(Boolean* pExclusive);
    Double* getPMaxDiscount();
    void setPMaxDiscount(Double* pMax_discount);
    Integer* getPMaxQuantity();
    void setPMaxQuantity(Integer* pMax_quantity);
    Double* getPMinCartTotal();
    void setPMinCartTotal(Double* pMin_cart_total);
    String* getPName();
    void setPName(String* pName);
    Boolean* getPSelfExclusive();
    void setPSelfExclusive(Boolean* pSelf_exclusive);
    Integer* getPTargetItemId();
    void setPTargetItemId(Integer* pTarget_item_id);
    String* getPType();
    void setPType(String* pType);
    IList* getPValidForTags();
    void setPValidForTags(IList* pValid_for_tags);
    Double* getPValue();
    void setPValue(Double* pValue);
    Integer* getPVendorId();
    void setPVendorId(Integer* pVendor_id);

private:
    String* pCode;
String* pDescription;
String* pDiscount_type;
Boolean* pExclusive;
Double* pMax_discount;
Integer* pMax_quantity;
Double* pMin_cart_total;
String* pName;
Boolean* pSelf_exclusive;
Integer* pTarget_item_id;
String* pType;
IList* pValid_for_tags;
Double* pValue;
Integer* pVendor_id;
};

} /* namespace Swagger */

#endif /* SamiCouponDefinition_H_ */
