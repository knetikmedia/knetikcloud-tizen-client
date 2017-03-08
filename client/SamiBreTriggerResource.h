/*
 * SamiBreTriggerResource.h
 * 
 * 
 */

#ifndef SamiBreTriggerResource_H_
#define SamiBreTriggerResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiBreTriggerParameterDefinition.h"
using Tizen::Base::Boolean;
using Tizen::Base::Collection::IList;
using Tizen::Base::String;


namespace Swagger {

class SamiBreTriggerResource: public SamiObject {
public:
    SamiBreTriggerResource();
    SamiBreTriggerResource(String* json);
    virtual ~SamiBreTriggerResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiBreTriggerResource* fromJson(String* obj);

    String* getPCategory();
    void setPCategory(String* pCategory);
    String* getPEventName();
    void setPEventName(String* pEvent_name);
    IList* getPParameters();
    void setPParameters(IList* pParameters);
    Boolean* getPSystemTrigger();
    void setPSystemTrigger(Boolean* pSystem_trigger);
    String* getPTriggerDescription();
    void setPTriggerDescription(String* pTrigger_description);
    String* getPTriggerName();
    void setPTriggerName(String* pTrigger_name);

private:
    String* pCategory;
String* pEvent_name;
IList* pParameters;
Boolean* pSystem_trigger;
String* pTrigger_description;
String* pTrigger_name;
};

} /* namespace Swagger */

#endif /* SamiBreTriggerResource_H_ */
