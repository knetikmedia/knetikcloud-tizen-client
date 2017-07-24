/*
 * SamiActivityResource.h
 * 
 * Represents an activity that can be parameterized and tracked through metrics (scores, etc)
 */

#ifndef SamiActivityResource_H_
#define SamiActivityResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiActivityEntitlementResource.h"
#include "SamiAvailableSettingResource.h"
#include "SamiProperty.h"
#include "SamiRewardSetResource.h"
using Tizen::Base::Boolean;
using Tizen::Base::Collection::HashMap;
using Tizen::Base::Collection::IList;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiActivityResource: public SamiObject {
public:
    SamiActivityResource();
    SamiActivityResource(String* json);
    virtual ~SamiActivityResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiActivityResource* fromJson(String* obj);

    HashMap* getPAdditionalProperties();
    void setPAdditionalProperties(HashMap* pAdditional_properties);
    Long* getPCreatedDate();
    void setPCreatedDate(Long* pCreated_date);
    IList* getPEntitlements();
    void setPEntitlements(IList* pEntitlements);
    Long* getPId();
    void setPId(Long* pId);
    String* getPLaunch();
    void setPLaunch(String* pLaunch);
    String* getPLongDescription();
    void setPLongDescription(String* pLong_description);
    String* getPName();
    void setPName(String* pName);
    SamiRewardSetResource* getPRewardSet();
    void setPRewardSet(SamiRewardSetResource* pReward_set);
    IList* getPSettings();
    void setPSettings(IList* pSettings);
    String* getPShortDescription();
    void setPShortDescription(String* pShort_description);
    Boolean* getPTemplate();
    void setPTemplate(Boolean* pTemplate);
    String* getPTemplateId();
    void setPTemplateId(String* pTemplate_id);
    String* getPType();
    void setPType(String* pType);
    String* getPUniqueKey();
    void setPUniqueKey(String* pUnique_key);
    Long* getPUpdatedDate();
    void setPUpdatedDate(Long* pUpdated_date);

private:
    HashMap* pAdditional_properties;
Long* pCreated_date;
IList* pEntitlements;
Long* pId;
String* pLaunch;
String* pLong_description;
String* pName;
SamiRewardSetResource* pReward_set;
IList* pSettings;
String* pShort_description;
Boolean* pTemplate;
String* pTemplate_id;
String* pType;
String* pUnique_key;
Long* pUpdated_date;
};

} /* namespace Swagger */

#endif /* SamiActivityResource_H_ */
