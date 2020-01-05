const discord = require("discord.js");
const client = new discord.Client();

client.on("message", message => {
    if (message.guild == null && message.author != client.user) {
        message.reply(message.content);
    } 
});



client.login("NjYzMTc0MTcwOTA5MjEyNzEy.XhErIw.Q1HyY6iG56AVu5UGCqbL2MpkhBU");