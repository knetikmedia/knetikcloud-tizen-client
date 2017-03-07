/*
 * SamiAnswerResource.h
 * 
 * 
 */

#ifndef SamiAnswerResource_H_
#define SamiAnswerResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiProperty.h"
using Tizen::Base::Boolean;
using Tizen::Base::String;


namespace Swagger {

class SamiAnswerResource: public SamiObject {
public:
    SamiAnswerResource();
    SamiAnswerResource(String* json);
    virtual ~SamiAnswerResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiAnswerResource* fromJson(String* obj);

    SamiProperty* getPAnswer();
    void setPAnswer(SamiProperty* pAnswer);
    Boolean* getPCorrect();
    void setPCorrect(Boolean* pCorrect);
    String* getPId();
    void setPId(String* pId);

private:
    SamiProperty* pAnswer;
Boolean* pCorrect;
String* pId;
};

} /* namespace Swagger */

#endif /* SamiAnswerResource_H_ */
