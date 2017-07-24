/*
 * SamiInventorySubscriptionResource.h
 * 
 * 
 */

#ifndef SamiInventorySubscriptionResource_H_
#define SamiInventorySubscriptionResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiPaymentMethodResource.h"
#include "SamiSimpleUserResource.h"
#include "SamiSubscriptionCreditResource.h"
using Tizen::Base::Collection::IList;
using Tizen::Base::Double;
using Tizen::Base::Integer;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiInventorySubscriptionResource: public SamiObject {
public:
    SamiInventorySubscriptionResource();
    SamiInventorySubscriptionResource(String* json);
    virtual ~SamiInventorySubscriptionResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiInventorySubscriptionResource* fromJson(String* obj);

    Long* getPBillDate();
    void setPBillDate(Long* pBill_date);
    Double* getPCredit();
    void setPCredit(Double* pCredit);
    IList* getPCreditLog();
    void setPCreditLog(IList* pCredit_log);
    Long* getPGraceEnd();
    void setPGraceEnd(Long* pGrace_end);
    Integer* getPInventoryId();
    void setPInventoryId(Integer* pInventory_id);
    String* getPInventoryStatus();
    void setPInventoryStatus(String* pInventory_status);
    Integer* getPItemId();
    void setPItemId(Integer* pItem_id);
    SamiPaymentMethodResource* getPPaymentMethod();
    void setPPaymentMethod(SamiPaymentMethodResource* pPayment_method);
    Double* getPPriceOverride();
    void setPPriceOverride(Double* pPrice_override);
    String* getPPriceOverrideReason();
    void setPPriceOverrideReason(String* pPrice_override_reason);
    Double* getPRecurringPrice();
    void setPRecurringPrice(Double* pRecurring_price);
    String* getPSku();
    void setPSku(String* pSku);
    Long* getPStartDate();
    void setPStartDate(Long* pStart_date);
    Integer* getPSubscriptionStatus();
    void setPSubscriptionStatus(Integer* pSubscription_status);
    SamiSimpleUserResource* getPUser();
    void setPUser(SamiSimpleUserResource* pUser);

private:
    Long* pBill_date;
Double* pCredit;
IList* pCredit_log;
Long* pGrace_end;
Integer* pInventory_id;
String* pInventory_status;
Integer* pItem_id;
SamiPaymentMethodResource* pPayment_method;
Double* pPrice_override;
String* pPrice_override_reason;
Double* pRecurring_price;
String* pSku;
Long* pStart_date;
Integer* pSubscription_status;
SamiSimpleUserResource* pUser;
};

} /* namespace Swagger */

#endif /* SamiInventorySubscriptionResource_H_ */
