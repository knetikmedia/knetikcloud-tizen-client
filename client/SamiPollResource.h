/*
 * SamiPollResource.h
 * 
 * 
 */

#ifndef SamiPollResource_H_
#define SamiPollResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiNestedCategory.h"
#include "SamiPollAnswerResource.h"
#include "SamiProperty.h"
using Tizen::Base::Boolean;
using Tizen::Base::Collection::HashMap;
using Tizen::Base::Collection::IList;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiPollResource: public SamiObject {
public:
    SamiPollResource();
    SamiPollResource(String* json);
    virtual ~SamiPollResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiPollResource* fromJson(String* obj);

    Boolean* getPActive();
    void setPActive(Boolean* pActive);
    HashMap* getPAdditionalProperties();
    void setPAdditionalProperties(HashMap* pAdditional_properties);
    IList* getPAnswers();
    void setPAnswers(IList* pAnswers);
    SamiNestedCategory* getPCategory();
    void setPCategory(SamiNestedCategory* pCategory);
    Long* getPCreatedDate();
    void setPCreatedDate(Long* pCreated_date);
    String* getPId();
    void setPId(String* pId);
    IList* getPTags();
    void setPTags(IList* pTags);
    String* getPTemplate();
    void setPTemplate(String* pTemplate);
    String* getPText();
    void setPText(String* pText);
    String* getPType();
    void setPType(String* pType);
    Long* getPUpdatedDate();
    void setPUpdatedDate(Long* pUpdated_date);

private:
    Boolean* pActive;
HashMap* pAdditional_properties;
IList* pAnswers;
SamiNestedCategory* pCategory;
Long* pCreated_date;
String* pId;
IList* pTags;
String* pTemplate;
String* pText;
String* pType;
Long* pUpdated_date;
};

} /* namespace Swagger */

#endif /* SamiPollResource_H_ */
