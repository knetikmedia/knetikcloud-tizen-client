/*
 * SamiSubscriptionTemplateResource.h
 * 
 * 
 */

#ifndef SamiSubscriptionTemplateResource_H_
#define SamiSubscriptionTemplateResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiPropertyDefinitionResource.h"
#include "SamiTemplateResource.h"
using Tizen::Base::Collection::IList;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiSubscriptionTemplateResource: public SamiObject {
public:
    SamiSubscriptionTemplateResource();
    SamiSubscriptionTemplateResource(String* json);
    virtual ~SamiSubscriptionTemplateResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiSubscriptionTemplateResource* fromJson(String* obj);

    Long* getPCreatedDate();
    void setPCreatedDate(Long* pCreated_date);
    String* getPId();
    void setPId(String* pId);
    String* getPName();
    void setPName(String* pName);
    SamiTemplateResource* getPPlanTemplate();
    void setPPlanTemplate(SamiTemplateResource* pPlan_template);
    IList* getPProperties();
    void setPProperties(IList* pProperties);
    Long* getPUpdatedDate();
    void setPUpdatedDate(Long* pUpdated_date);

private:
    Long* pCreated_date;
String* pId;
String* pName;
SamiTemplateResource* pPlan_template;
IList* pProperties;
Long* pUpdated_date;
};

} /* namespace Swagger */

#endif /* SamiSubscriptionTemplateResource_H_ */
