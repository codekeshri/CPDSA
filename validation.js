db.createCollection('posts', {
    validator: {
        $jsonSchema: {
            bsonType: 'object', 
            required: ['title', 'text', 'creator', 'comments'],
            properties: {
                title: {
                    bsonType: 'string',
                    description: 'must be a string and is required'
                },
                creator: {
                    bsonType: 'objectId', 
                    description: "mst be an objectId and is required",
                },
                text: {
                    bsonType: 'string', 
                    description: "mst be a string and is required",
                },
                comments: {
                    bsonType: "array",
                    description: "must be a string and is required",
                    items: {
                        bsonType: "object",
                        required: ["text", "author"],
                        properties: {
                            text: {
                                bsonType: "string", 
                                description: "must ba a string and is required"
                            },
                            author: {
                                bsonType: "objectId",
                                description: "must be an object and is required"
                            }
                        }
                    }
                }

            }
        }
    }
})