/*
 * SamiAchievementDefinitionResource.h
 * 
 * 
 */

#ifndef SamiAchievementDefinitionResource_H_
#define SamiAchievementDefinitionResource_H_

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
using Tizen::Base::Integer;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiAchievementDefinitionResource: public SamiObject {
public:
    SamiAchievementDefinitionResource();
    SamiAchievementDefinitionResource(String* json);
    virtual ~SamiAchievementDefinitionResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiAchievementDefinitionResource* fromJson(String* obj);

    HashMap* getPAdditionalProperties();
    void setPAdditionalProperties(HashMap* pAdditional_properties);
    Long* getPCreatedDate();
    void setPCreatedDate(Long* pCreated_date);
    String* getPDescription();
    void setPDescription(String* pDescription);
    Boolean* getPHidden();
    void setPHidden(Boolean* pHidden);
    String* getPName();
    void setPName(String* pName);
    Integer* getPRequiredProgress();
    void setPRequiredProgress(Integer* pRequired_progress);
    String* getPRuleId();
    void setPRuleId(String* pRule_id);
    IList* getPTags();
    void setPTags(IList* pTags);
    String* getPTemplate();
    void setPTemplate(String* pTemplate);
    String* getPTriggerEventName();
    void setPTriggerEventName(String* pTrigger_event_name);
    Long* getPUpdatedDate();
    void setPUpdatedDate(Long* pUpdated_date);

private:
    HashMap* pAdditional_properties;
Long* pCreated_date;
String* pDescription;
Boolean* pHidden;
String* pName;
Integer* pRequired_progress;
String* pRule_id;
IList* pTags;
String* pTemplate;
String* pTrigger_event_name;
Long* pUpdated_date;
};

} /* namespace Swagger */

#endif /* SamiAchievementDefinitionResource_H_ */
