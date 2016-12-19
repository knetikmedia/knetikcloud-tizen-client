/*
 * SamiCollection«VideoContribution».h
 * 
 * 
 */

#ifndef SamiCollection«VideoContribution»_H_
#define SamiCollection«VideoContribution»_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;




namespace Swagger {

class SamiCollection«VideoContribution»: public SamiObject {
public:
    SamiCollection«VideoContribution»();
    SamiCollection«VideoContribution»(String* json);
    virtual ~SamiCollection«VideoContribution»();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiCollection«VideoContribution»* fromJson(String* obj);


private:
    };

} /* namespace Swagger */

#endif /* SamiCollection«VideoContribution»_H_ */
