/*
 * SamiSubscriptionCreditResource.h
 * 
 * 
 */

#ifndef SamiSubscriptionCreditResource_H_
#define SamiSubscriptionCreditResource_H_

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

class SamiSubscriptionCreditResource: public SamiObject {
public:
    SamiSubscriptionCreditResource();
    SamiSubscriptionCreditResource(String* json);
    virtual ~SamiSubscriptionCreditResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiSubscriptionCreditResource* fromJson(String* obj);

    Double* getPAmount();
    void setPAmount(Double* pAmount);
    Long* getPCreatedDate();
    void setPCreatedDate(Long* pCreated_date);
    Integer* getPId();
    void setPId(Integer* pId);
    Integer* getPInventoryId();
    void setPInventoryId(Integer* pInventory_id);
    String* getPReason();
    void setPReason(String* pReason);

private:
    Double* pAmount;
Long* pCreated_date;
Integer* pId;
Integer* pInventory_id;
String* pReason;
};

} /* namespace Swagger */

#endif /* SamiSubscriptionCreditResource_H_ */
