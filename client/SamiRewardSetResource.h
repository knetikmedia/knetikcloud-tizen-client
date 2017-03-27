/*
 * SamiRewardSetResource.h
 * 
 * 
 */

#ifndef SamiRewardSetResource_H_
#define SamiRewardSetResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiRewardCurrencyResource.h"
#include "SamiRewardItemResource.h"
using Tizen::Base::Collection::IList;
using Tizen::Base::Integer;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiRewardSetResource: public SamiObject {
public:
    SamiRewardSetResource();
    SamiRewardSetResource(String* json);
    virtual ~SamiRewardSetResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiRewardSetResource* fromJson(String* obj);

    Long* getPCreatedDate();
    void setPCreatedDate(Long* pCreated_date);
    IList* getPCurrencyRewards();
    void setPCurrencyRewards(IList* pCurrency_rewards);
    Integer* getPId();
    void setPId(Integer* pId);
    IList* getPItemRewards();
    void setPItemRewards(IList* pItem_rewards);
    String* getPLongDescription();
    void setPLongDescription(String* pLong_description);
    Integer* getPMaxPlacing();
    void setPMaxPlacing(Integer* pMax_placing);
    String* getPName();
    void setPName(String* pName);
    String* getPShortDescription();
    void setPShortDescription(String* pShort_description);
    String* getPUniqueKey();
    void setPUniqueKey(String* pUnique_key);
    Long* getPUpdatedDate();
    void setPUpdatedDate(Long* pUpdated_date);

private:
    Long* pCreated_date;
IList* pCurrency_rewards;
Integer* pId;
IList* pItem_rewards;
String* pLong_description;
Integer* pMax_placing;
String* pName;
String* pShort_description;
String* pUnique_key;
Long* pUpdated_date;
};

} /* namespace Swagger */

#endif /* SamiRewardSetResource_H_ */
