/*
 * SamiQuestionTemplateResource.h
 * 
 * 
 */

#ifndef SamiQuestionTemplateResource_H_
#define SamiQuestionTemplateResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiPropertyDefinitionResource.h"
using Tizen::Base::Collection::IList;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiQuestionTemplateResource: public SamiObject {
public:
    SamiQuestionTemplateResource();
    SamiQuestionTemplateResource(String* json);
    virtual ~SamiQuestionTemplateResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiQuestionTemplateResource* fromJson(String* obj);

    SamiPropertyDefinitionResource* getPAnswerProperty();
    void setPAnswerProperty(SamiPropertyDefinitionResource* pAnswer_property);
    Long* getPCreatedDate();
    void setPCreatedDate(Long* pCreated_date);
    String* getPId();
    void setPId(String* pId);
    String* getPName();
    void setPName(String* pName);
    IList* getPProperties();
    void setPProperties(IList* pProperties);
    SamiPropertyDefinitionResource* getPQuestionProperty();
    void setPQuestionProperty(SamiPropertyDefinitionResource* pQuestion_property);
    Long* getPUpdatedDate();
    void setPUpdatedDate(Long* pUpdated_date);

private:
    SamiPropertyDefinitionResource* pAnswer_property;
Long* pCreated_date;
String* pId;
String* pName;
IList* pProperties;
SamiPropertyDefinitionResource* pQuestion_property;
Long* pUpdated_date;
};

} /* namespace Swagger */

#endif /* SamiQuestionTemplateResource_H_ */
