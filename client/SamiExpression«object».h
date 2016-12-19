/*
 * SamiExpression«object».h
 * 
 * 
 */

#ifndef SamiExpression«object»_H_
#define SamiExpression«object»_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;




namespace Swagger {

class SamiExpression«object»: public SamiObject {
public:
    SamiExpression«object»();
    SamiExpression«object»(String* json);
    virtual ~SamiExpression«object»();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiExpression«object»* fromJson(String* obj);


private:
    };

} /* namespace Swagger */

#endif /* SamiExpression«object»_H_ */
